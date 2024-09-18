# Write your MySQL query statement below
SELECT p.firstName, p.lastName, q.city,q.state
FROM person p
LEFT JOIN address q
ON p.personId = q.personId