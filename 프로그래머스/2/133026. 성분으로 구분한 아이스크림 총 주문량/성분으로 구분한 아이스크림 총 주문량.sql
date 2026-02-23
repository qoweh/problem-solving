select i.ingredient_type, sum(f.total_order) total_order
from FIRST_HALF f join ICECREAM_INFO i on f.flavor = i.flavor
group by i.ingredient_type
order by 2 asc;