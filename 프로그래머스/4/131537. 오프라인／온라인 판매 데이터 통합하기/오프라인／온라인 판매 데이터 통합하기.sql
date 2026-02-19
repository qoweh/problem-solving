-- 코드를 입력하세요
-- 2022-03의 온/오프라인 상품 판매 데이터
SELECT date_format(sales_date, '%Y-%m-%d') SALES_DATE, product_id, user_id, sales_amount from online_sale
where date_format(sales_date, '%Y-%m') = '2022-03'
union all
SELECT date_format(sales_date, '%Y-%m-%d') SALES_DATE, product_id, NULL as user_id, sales_amount from offline_sale
where date_format(sales_date, '%Y-%m') = '2022-03'
order by SALES_DATE asc, product_id asc, user_id asc;