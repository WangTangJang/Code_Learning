# 8. 查询至少有一门课与学号为" 01 "的同学所学相同的同学的信息

-- 学号为 01 的同学所学的课程

SELECT `CId` FROM sc WHERE `SId` = 01

-- 与其所学至少有一门相同的学生学号
SELECT `SId` FROM sc WHERE `CId` IN (
    SELECT `CId` FROM sc WHERE `SId` = 01
)

-- 学生信息
SELECT * FROM student WHERE `SId` IN(
    SELECT `SId` FROM sc WHERE `CId` IN (
      SELECT `CId` FROM sc WHERE `SId` = 01
    )
)

