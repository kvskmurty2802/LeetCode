# Write your MySQL query statement below
SELECT p.product_name, s.year, s.price
FROM Product p
INNER JOIN Sales s
    USING(product_id)