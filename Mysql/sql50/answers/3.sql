# 3. 查询在 SC 表存在成绩的学生信息

# 使用子查询
 SELECT * FROM student
 WHERE `SId` IN (
    SELECT DISTINCT `SId` FROM sc -- DISTINCT 去除重复内容
 )

# 使用显式内联结
SELECT DISTINCT student.* 
FROM student
INNER JOIN sc
ON student.`SId` = sc.`SId` 

# 使用隐式内联结
SELECT DISTINCT student.* 
FROM student,sc
WHERE student.`SId` = sc.`SId` 
