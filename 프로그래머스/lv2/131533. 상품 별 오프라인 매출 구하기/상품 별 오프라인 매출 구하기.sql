SELECT i.PRODUCT_CODE, SUM(i.PRICE*j.SALES_AMOUNT) AS SALES
FROM PRODUCT i
INNER JOIN OFFLINE_SALE j
ON i.PRODUCT_ID = j.PRODUCT_ID
GROUP BY i.PRODUCT_CODE
ORDER BY SALES DESC, i.PRODUCT_CODE;