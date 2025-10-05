SELECT Customers.name AS Customers
FROM Customers 
LEFT JOIN Orders
  ON Customers.id = Orders.customerId
GROUP BY Customers.id, Customers.name
HAVING COUNT(Orders.id) = 0;
