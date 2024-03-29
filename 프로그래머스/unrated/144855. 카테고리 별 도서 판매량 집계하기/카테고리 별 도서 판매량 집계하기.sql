# 두 테이블은 BOOK_ID를 공유함
# 2022년 1월의 카테고리별 도서판매량!!!!!
# 카테고리와 총판매량을 출력하시오..
# CATEGORY ASC
# 2022년 1월의 아이디별 판매량을 알 수 있음.

SELECT B.CATEGORY, SUM(A.S) AS TOTAL_SALES
FROM (
    SELECT BOOK_ID, SUM(SALES) AS S
    FROM BOOK_SALES
    WHERE DATE_FORMAT(SALES_DATE, '%Y-%m')='2022-01'
    GROUP BY BOOK_ID
) A
JOIN BOOK B
ON A.BOOK_ID = B.BOOK_ID
GROUP BY CATEGORY
ORDER BY CATEGORY
;

# SELECT B.CATEGORY, SUM(A.B_S) AS TOTAL_SALES
# FROM
# (SELECT BOOK_ID, SUM(SALES) AS B_S
# FROM BOOK_SALES
# WHERE DATE_FORMAT(SALES_DATE, '%Y-%m')='2022-01'
# GROUP BY BOOK_ID
# )A
# JOIN BOOK B
# ON A.BOOK_ID=B.BOOK_ID
# GROUP BY CATEGORY
# ORDER BY CATEGORY