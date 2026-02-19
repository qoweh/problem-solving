-- 코드를 입력하세요
-- 위치=서울, 리뷰 평균점수 반올림(셋째자리에서), 정렬
SELECT i.rest_id, i.rest_name, i.food_type, i.favorites, i.address, round(avg(r.review_score), 2) SCORE from rest_info i join rest_review r on i.rest_id = r.rest_id
where i.address like '서울%'
group by i.rest_id
order by SCORE desc, i.favorites desc;