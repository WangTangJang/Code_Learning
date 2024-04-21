# 6. 查询学过「张三」老师授课的同学的信息

# 查询张三授课 id
SELECT `CId` 
FROM course
WHERE `TId` IN(
    SELECT `TId` FROM teacher
    WHERE `Tname` = '张三'
)

# 双层 in
SELECT * 
FROM student t1
JOIN sc t2
ON t1.`SId` = t2.`SId`
WHERE t2.`CId` IN(
    SELECT `CId` 
    FROM course
    WHERE `TId` IN(
    SELECT `TId` FROM teacher
    WHERE `Tname` = '张三'
    )
)

# 多表联合查询
SELECT student.* 
FROM sc,
     student,
     teacher,
     course
WHERE sc.`SId` = student.`SId`
AND   sc.`CId` = course.`CId`
AND   course.`TId` = teacher.`TId`
AND   teacher.`Tname` = '张三'

SELECT * FROM teacher

SELECT * FROM sc

SELECT * FROM teacher

SELECT * FROM course
