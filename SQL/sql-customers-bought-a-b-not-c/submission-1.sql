-- Write your query below
SELECT DISTINCT 
    c.customer_id, 
    c.customer_name
FROM customers c
JOIN orders o1 ON c.customer_id = o1.customer_id AND o1.product_name = 'A'
JOIN orders o2 ON c.customer_id = o2.customer_id AND o2.product_name = 'B'
WHERE c.customer_id NOT IN (
    SELECT customer_id 
    FROM orders 
    WHERE product_name = 'C'
)
ORDER BY c.customer_name;