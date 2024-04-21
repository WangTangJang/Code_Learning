# Q13
# 按平均成绩从高到低显示所有学生的所有课程的成绩以及平均成绩
# 实现似乎有些问题，个人觉得没有成绩的学生也要算
select *
from SC as sc
         left outer join
     (
         select sc.SId, avg(sc.score) as avg_score
         from SC sc
         group by sc.SId
     ) as r
     on sc.SId = r.SId
order by avg_score desc;

# +---+---+-----+---+---------+
# |SId|CId|score|SId|avg_score|
# +---+---+-----+---+---------+
# |07 |03 |98.0 |07 |93.50000 |
# |07 |02 |89.0 |07 |93.50000 |
# |01 |02 |90.0 |01 |89.66667 |
# |01 |03 |99.0 |01 |89.66667 |
# |01 |01 |80.0 |01 |89.66667 |
# |05 |01 |76.0 |05 |81.50000 |
# |05 |02 |87.0 |05 |81.50000 |
# |03 |01 |80.0 |03 |80.00000 |
# |03 |02 |80.0 |03 |80.00000 |
# |03 |03 |80.0 |03 |80.00000 |
# |02 |01 |70.0 |02 |70.00000 |
# |02 |02 |60.0 |02 |70.00000 |
# |02 |03 |80.0 |02 |70.00000 |
# |04 |01 |50.0 |04 |33.33333 |
# |04 |02 |30.0 |04 |33.33333 |
# |04 |03 |20.0 |04 |33.33333 |
# |06 |01 |31.0 |06 |32.50000 |
# |06 |03 |34.0 |06 |32.50000 |
# +---+---+-----+---+---------+
