/*
 * @lc app=leetcode.cn id=70 lang=cpp
 *
 * [70] 爬楼梯
 */

// @lc code=start
class Solution {
public:
    int climbStairs(int n) {
        if (n <= 2) return n; // 边界条件
        int a = 1, b = 2, c; // 初始化前两项
        for (int i = 3; i <= n; i++) { // 从第三项开始循环
            c = a + b; // 计算当前项
            a = b; // 更新前一项
            b = c; // 更新后一项
        }
        return c; // 返回结果
        }
};
// @lc code=end

