use MYSCHOOL;
create table student(
	roll char(5) primary key,
    namee varchar(50),
    marks double
);

drop table student;
insert into student(roll, namee, marks) values(499, "Rakibul Hassan", 92);
insert into student(roll, namee, marks) values(500, "Nowaz", 92);

set SQL_SAFE_UPDATES = 0
UPDATE student 
set namee = "Nowaz Bin Younus"
where roll = 500
set SQL_SAFE_UPDATES = 1