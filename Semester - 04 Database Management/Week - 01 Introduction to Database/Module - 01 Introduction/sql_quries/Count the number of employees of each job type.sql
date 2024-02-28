-- Count the number of employees of each job type--  
SELECT job_id, COUNT(*) as TOTAL_EMPLOYEES
FROM employees
GROUP BY job_id;

