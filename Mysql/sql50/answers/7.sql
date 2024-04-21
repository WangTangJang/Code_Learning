# 7. 查询没有学全所有课程的同学的信息

-- 全部课程
SELECT * FROM course

-- 选课信息
SELECT * FROM sc

-- 分组
SELECT COUNT(`CId`) 
FROM sc
GROUP BY `SId`

-- 全选课了的学生，选课数量与课程中数量一直则是全选了。
SELECT sc.`SId`
FROM sc
GROUP BY `SId`
HAVING COUNT(`CId`) = (
    SELECT COUNT(`CId`) FROM course
)

-- 未全选的学生，有的甚至都没有选。
SELECT * 
FROM student 
WHERE `SId` NOT IN (
    SELECT sc.`SId`
    FROM sc
    GROUP BY `SId`
    HAVING COUNT(`CId`) = (
        SELECT COUNT(`CId`) FROM course
    )
)