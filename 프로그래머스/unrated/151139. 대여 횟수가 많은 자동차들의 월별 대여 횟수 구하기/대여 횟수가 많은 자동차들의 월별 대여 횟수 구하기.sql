# 2022/8 부터 10월까지, 5회 이상인 자동체들에 대해서,
# 월별 대여 횟수를 출력하시오. (0이면 출력X)
# 월 ASC, ID DESC

SELECT MONTH(START_DATE) AS MONTH, CAR_ID, COUNT(CAR_ID) AS RECORDS
FROM CAR_RENTAL_COMPANY_RENTAL_HISTORY
WHERE CAR_ID IN
(
    SELECT CAR_ID
    FROM CAR_RENTAL_COMPANY_RENTAL_HISTORY
    WHERE START_DATE LIKE '%-08-%' OR 
    START_DATE LIKE '%-09-%' OR 
    START_DATE LIKE '%-10-%'
    GROUP BY CAR_ID
    HAVING COUNT(*) > 4
) AND START_DATE BETWEEN "2022-08-01" AND "2022-10-31"
GROUP BY MONTH, CAR_ID
ORDER BY MONTH, CAR_ID DESC
;

# SELECT MONTH(START_DATE) `MONTH`, CAR_ID, COUNT(CAR_ID) RECORDS
# FROM CAR_RENTAL_COMPANY_RENTAL_HISTORY
# WHERE START_DATE BETWEEN "2022-08-01" AND "2022-10-31"
# AND CAR_ID IN (
#     SELECT CAR_ID
#     FROM CAR_RENTAL_COMPANY_RENTAL_HISTORY
#     WHERE START_DATE BETWEEN "2022-08-01" AND "2022-10-31"
#     GROUP BY CAR_ID
#     HAVING COUNT(CAR_ID) >= 5
# )
# GROUP BY `MONTH`, CAR_ID
# ORDER BY 1, 2 DESC;