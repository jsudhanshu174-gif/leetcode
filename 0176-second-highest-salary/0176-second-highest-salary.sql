SELECT IFNULL(
    (SELECT  distinct salary
     FROM employee
     ORDER BY salary DESC
     LIMIT 1,1),
    NULL
) AS SecondHighestSalary;