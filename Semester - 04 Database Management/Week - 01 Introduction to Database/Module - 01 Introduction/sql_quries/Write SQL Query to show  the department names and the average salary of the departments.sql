-- Write SQL Query to show  the department names and the average salary of the departments

SELECT d.department_name AS DEPARTMENT_NAMES, AVG(e.salary) AS AVERAGE_SALARY
FROM departments d
JOIN employees e ON d.department_id = e.department_id
GROUP BY d.department_name;
