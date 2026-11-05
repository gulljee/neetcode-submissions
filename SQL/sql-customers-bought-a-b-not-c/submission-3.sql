SELECT c.customer_id, c.customer_name
FROM Customers c
WHERE EXISTS (SELECT 1 FROM Orders o WHERE o.customer_id = c.customer_id AND o.product_name = 'A')
  AND EXISTS (SELECT 1 FROM Orders o WHERE o.customer_id = c.customer_id AND o.product_name = 'B')
  AND NOT EXISTS (SELECT 1 FROM Orders o WHERE o.customer_id = c.customer_id AND o.product_name = 'C')
ORDER BY c.customer_name;