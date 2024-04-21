# 2. 查询平均成绩大于等于 60 分的同学的学生编号和学生姓名和平均成绩

# 因为要查找学生姓名，因此要用的student表

# 首先，查出每个同学的平均分
SELECT `SId`,AVG(score) as avg_socre
FROM sc
GROUP BY `SId`

# 找出在60分以上的
SELECT `SId`,AVG(score) as avg_score
FROM sc
GROUP BY `SId`
HAVING avg_score>60

# 与student表联结起来
SELECT t_avg.* ,student.`Sname`
FROM (
    SELECT `SId`,AVG(score) as avg_score
    FROM sc
    GROUP BY `SId`
    HAVING avg_score>60
)as t_avg
LEFT JOIN student
ON  t_avg.sid = student.`SId` 