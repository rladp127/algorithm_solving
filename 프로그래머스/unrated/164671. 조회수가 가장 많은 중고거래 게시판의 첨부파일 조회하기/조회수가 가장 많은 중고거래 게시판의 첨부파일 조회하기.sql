# 두 테이블은 BOARD_ID 가 같다.
# 조회수가 가장 높은 게시물의 첨부파일을 확인.
# 파일 경로: /home/grep/src/BOARD_ID/FILE_ID+FILE_NAME+FILE_EXT
# concat(PRICE, TITLE)
# FILE_ID DESC

SELECT CONCAT('/home/grep/src/', BOARD_ID, '/', FILE_ID, FILE_NAME, FILE_EXT) AS FILE_PATH
FROM (
    SELECT *
    FROM USED_GOODS_BOARD
    ORDER BY VIEWS DESC LIMIT 1) i
JOIN USED_GOODS_FILE j USING (BOARD_ID)
ORDER BY FILE_ID DESC
;