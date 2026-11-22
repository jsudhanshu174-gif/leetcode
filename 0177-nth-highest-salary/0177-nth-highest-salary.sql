CREATE FUNCTION getNthHighestSalary(N INT) RETURNS INT
BEGIN
  RETURN (
     select distinct Salary 
     from (
        select salary,
        dense_rank() over (order by salary desc) as rk
        from Employee
     )as rankind
     where rk=N
  );
END