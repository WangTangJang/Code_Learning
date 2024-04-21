# 查有成绩的学生信息

# 使用内联结
SELECT DISTINCT student.* 
FROM student,sc
WHERE student.`SId` = sc.`SId`

# 使用 in 
SELECT *
FROM student
WHERE `SId` IN (SELECT `SId` FROM sc)

# 使用 exists
# SELECT 语句是以行为单位逐个执行的。
# 对于每一行 student 数据,都会去检查 sc 表中是否有对应的记录。
# 只有满足 EXISTS 条件的行,才会被最终返回。
SELECT * FROM student as t1
WHERE EXISTS (                  -- 每行记录会去判断是否存在于新的表
    SELECT  student.* 
    FROM student,sc
    WHERE student.`SId` = sc.`SId`
)

