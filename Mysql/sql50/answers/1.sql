-- Active: 1713029702481@@127.0.0.1@3306@sql50
# 1. 查询" 01 "课程比" 02 "课程成绩高的学生的信息及课程分数;

# 先查询01课程
-- select * from Sc where CId = '01';

# 在查询02课程
-- select * from Sc where CId = '02';

# 两张表合并
-- select * from
-- (select SId , score as score_for_c01 from Sc where CId = '01') as t1,
-- (select SId , score as score_for_c02 from Sc where CId = '02') as t2
-- where t1.SId = t2.SId

# 合并表中判断01课程比02课程成绩高
-- select * from
-- (select SId , score as score_for_c01 from Sc where CId = '01') as t1,
-- (select SId , score as score_for_c02 from Sc where CId = '02') as t2
-- where t1.SId = t2.SId and score_for_c01>score_for_c02

# 将查询结果与学生表连接
select *
from Student as s
    right join (
        select t1.SId, score_for_c01, score_for_c02
        from (
                select SId, score as score_for_c01
                from Sc
                where
                    CId = '01'
            ) as t1, (
                select SId, score as score_for_c02
                from Sc
                where
                    CId = '02'
            ) as t2
        where
            t1.SId = t2.SId
            and score_for_c01 > score_for_c02
    ) as c on s.SId = c.SId
    #