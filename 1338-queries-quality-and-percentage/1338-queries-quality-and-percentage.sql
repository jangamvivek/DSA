SELECT 
    q.query_name,
    ROUND(SUM(q.rating * 1.0 / q.position) / COUNT(*), 2) AS quality,
    ROUND(SUM(CASE WHEN q.rating < 3 THEN 1 ELSE 0 END) * 100.0 / COUNT(*), 2) AS poor_query_percentage
FROM Queries q
GROUP BY q.query_name;
