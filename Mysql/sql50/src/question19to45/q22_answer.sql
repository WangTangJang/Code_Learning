# Q22
# 查询名字中含有“风”字的学生信息
# 简单，通配符
SELECT s.*
FROM Student as s
WHERE s.Sname LIKE '%风%';

# +---+-----+-------------------+----+
# |SId|Sname|Sage               |Ssex|
# +---+-----+-------------------+----+
# |03 |孙风   |1990-12-20 00:00:00|男   |
# +---+-----+-------------------+----+

