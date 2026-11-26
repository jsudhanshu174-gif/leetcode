select id as id ,count(*) as num
from(SELECT requester_id AS id FROM RequestAccepted
UNION ALL
SELECT accepter_id AS id FROM RequestAccepted) t
group by id
order by  num desc limit 1
