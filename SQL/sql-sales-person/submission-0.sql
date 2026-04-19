-- Write your query below
SELECT name
FROM sales_person
WHERE sales_id NOT IN (
    -- Subquery to find sales_id of people who sold to CRIMSON
    SELECT sales_id
    FROM orders
    WHERE com_id = (
        SELECT com_id
        FROM company
        WHERE name = 'CRIMSON'
    )
);