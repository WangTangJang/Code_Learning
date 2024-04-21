# Q4.1
# 查有成绩的学生信息
# 仔细区分IN和EXISTS的应用场景
select *
from Student as s
where SId in (select SId from SC);
# 或
select *
from Student as s
where exists(select sc.SId from SC as sc where s.SId = sc.SId);

# +---+-----+-------------------+----+
# |SId|Sname|Sage               |Ssex|
# +---+-----+-------------------+----+
# |01 |赵雷   |1990-01-01 00:00:00|男   |
# |02 |钱电   |1990-12-21 00:00:00|男   |
# |03 |孙风   |1990-12-20 00:00:00|男   |
# |04 |李云   |1990-12-06 00:00:00|男   |
# |05 |周梅   |1991-12-01 00:00:00|女   |
# |06 |吴兰   |1992-01-01 00:00:00|女   |
# |07 |郑竹   |1989-01-01 00:00:00|女   |
# +---+-----+-------------------+----+

