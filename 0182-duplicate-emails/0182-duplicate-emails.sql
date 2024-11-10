# Write your MySQL query statement below
SELECT email
FROM Person
Group By Email
HAVING Count(DISTINCT id)>1;