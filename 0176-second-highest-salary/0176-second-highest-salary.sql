# Write your MySQL query statement below
SELECT max(salary) as SecondHighestSalary FROM EMPLOYEE
WHERE salary NOT IN (SELECT max(salary) FROM EMPLOYEE);