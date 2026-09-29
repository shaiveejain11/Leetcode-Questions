# Write your MySQL query statement below
SELECT E1.name AS Employee
FROM Employee E1 JOIN Employee M1
ON E1.managerId=M1.id
WHERE E1.salary>M1.salary;