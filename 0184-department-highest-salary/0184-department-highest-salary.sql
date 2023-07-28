SELECT B.name as "Department", A.name as "Employee", A.salary as "Salary"
FROM (SELECT *, (dense_rank() over(Partition by C.departmentId order by C.salary DESC)) as "RNK" FROM Employee C) A
LEFT JOIN Department B ON A.departmentId=B.id
WHERE A.RNK=1