# Write your MySQL query statement below
SELECT q.unique_id, p.name
FROM Employees p
LEFT JOIN EmployeeUNI q
on p.id = q.id