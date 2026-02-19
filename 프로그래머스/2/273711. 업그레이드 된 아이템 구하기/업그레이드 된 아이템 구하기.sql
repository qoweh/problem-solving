-- 코드를 작성해주세요
select item_id, item_name, rarity from item_info 
    where item_id in 
        (select item_id from item_tree 
         where parent_item_id in (select item_id from item_info where rarity = 'RARE'))
order by item_id desc;


#  rare인 것들의 item_id가 parent_item_id에 존재하면 그 item_id들의 정보 출력