# Write your MySQL query statement below
SELECT year, price, product_name 
FROM Sales 
LEFT JOIN Product ON Sales.product_id = Product.product_id;