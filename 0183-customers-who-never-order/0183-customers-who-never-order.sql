/*select c.name as Customers
from Customers c
left join Orders o
   on c.id=o.customersId
where o.customerId is NULL*/
SELECT c.name AS Customers
FROM Customers c
LEFT JOIN Orders o
    ON c.id = o.customerId
WHERE o.customerId IS NULL;