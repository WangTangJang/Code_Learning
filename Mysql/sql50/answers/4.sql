# 4. 查询所有同学的学生编号、学生姓名、选课总数、所有课程的总成绩(没成绩的显示为 null )

# 每个学生的选课总数以及总成绩，使用分组
SELECT `SId`,COUNT(`CId`),SUM(score) FROM sc
GROUP BY `SId`

# 将查询结果与个人信息联结起来
SELECT t1.`SId`,t1.`Sname`,t2.c_count,t2.scoure_sum FROM student t1
LEFT JOIN (
    SELECT `SId`,COUNT(`CId`) as c_count,SUM(score) as scoure_sum 
    FROM sc
    GROUP BY `SId`
) as t2
ON t1.`SId` = t2.`SId`

# 使用IF表达式去除null
SELECT t1.`SId`,t1.`Sname`,IFNULL(t2.c_count,0),IFNULL(t2.scoure_sum,0) FROM student t1
LEFT JOIN (
    SELECT `SId`,COUNT(`CId`) as c_count,SUM(score) as scoure_sum 
    FROM sc
    GROUP BY `SId`
) as t2
ON t1.`SId` = t2.`SId`