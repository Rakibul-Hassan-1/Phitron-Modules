-- Show the names of the employees who get less salary than Steven-- 
SELECT e.first_name
FROM employees e
JOIN employees steven ON steven.first_name = 'Steven'
WHERE e.salary < steven.salary;
