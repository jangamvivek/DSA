# Write your MySQL query statement below
SELECT e1.name
FROM Employee as e1
JOIN (
    SELECT managerId 
    from Employee
    WHERE managerId is not null
    GROUP BY managerId
    HAVING count(*) >= 5
) AS sub
ON e1.id = sub.managerId