# 查询和" 01 "号的同学学习的课程完全相同的其他同学的信息

-- 学号为 01 的同学所学的课程，GROUP_CONCAT是一个聚合函数
SELECT `SId` ,GROUP_CONCAT(CId ORDER BY CId)  
FROM sc 
WHERE `SId` = 01 
GROUP BY `SId`

SELECT DISTINCT s.SId, s.SName, s.SSex, s.SAge
FROM Student s
INNER JOIN (
    SELECT SId, GROUP_CONCAT(CId ORDER BY CId DESC) AS course_list
    FROM SC
    WHERE SId = '01'
    GROUP BY SId
) t ON t.course_list = (
    SELECT GROUP_CONCAT(CId ORDER BY CId DESC)
    FROM SC
    WHERE SId = s.SId
    GROUP BY SId
)
WHERE s.SId <> '01';
