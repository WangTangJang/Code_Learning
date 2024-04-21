# 1.3 查询不存在" 01 "课程但存在" 02 "课程的情况

---- 错误
-- # 不存在 01
-- SELECT * FROM sc WHERE `CId` != '01';

-- # 再从其中检索存在 02 的情况
-- SELECT * 
-- FROM (SELECT * FROM sc WHERE `CId` != '01') AS t1
-- WHERE `CId` = 02;


# 检索不在其中 01 的sid

SELECT * 
FROM sc
WHERE `sid` NOT IN(
    SELECT `SId` FROM sc WHERE `CId` = '01'
) AND `CId` = '02'

# 使用联结
SELECT t1.*             -- 选择表一中的所有内容 
FROM SC AS t1           
LEFT JOIN SC AS t2      -- 将其与自身左联结 
ON t1.SId = t2.SId      -- 关联两张表
    AND t2.CId = '01'   -- 检查表二中存在 01 的行
WHERE t1.CId = '02'     -- 进行筛选，选出表一中存在 02 的行
    AND t2.SId IS NULL  -- 筛选出后一张表中为空的，即选 01 时没有找到的行