# 1.2 查询存在" 01 "课程但可能不存在" 02 "课程的情况(不存在时显示为 null )

# 查询 01 的课程
SELECT * FROM sc WHERE `CId` = '01';

SELECT * FROM sc WHERE `CId` = '02';

# 使用左联接，
SELECT  t1.* ,t2.CId ,t2.score
FROM (SELECT * FROM sc WHERE `CId` = '01') as t1 
LEFT JOIN (SELECT * FROM sc WHERE `CId` = '02') as t2
ON t1.SId = t2.SId;
