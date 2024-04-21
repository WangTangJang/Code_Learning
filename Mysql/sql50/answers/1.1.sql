-- Active: 1713030144451@@127.0.0.1@3306@sql50

# 1.1 查询同时存在" 01 "课程和" 02 "课程的情况

# 思路

# 先找出01课程的信息
SELECT * FROM sc WHERE `CId` = '01';

# 再找出02课程的信息
SELECT * FROM sc WHERE `CId` = '02';

# 从两个表中查找
SELECT * 
FROM ( SELECT * FROM SC  WHERE `CId` = '01') as t1,
     ( SELECT * FROM SC  WHERE `CId` = '02') as t2
WHERE t1.`SId` = t2.`SId`;
    
# 过滤信息
SELECT t1.*, t2.`CId`, t2.score
FROM ( SELECT * FROM SC WHERE `CId` = '01') as t1,
     ( SELECT * FROM SC WHERE `CId` = '02') as t2
WHERE t1.`SId` = t2.`SId`;