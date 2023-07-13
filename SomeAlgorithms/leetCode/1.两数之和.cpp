/*
 * @lc app=leetcode.cn id=1 lang=cpp
 *
 * [1] 两数之和
 */

// @lc code=start
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int arrLen =  nums.size();
        vector<int> result;
        for (int i = 0; i < arrLen; i++)
        {
            for (int j = i+1; j < arrLen; j++)
            {
                if (nums[i]+nums[j]==target)
                {
                    result.push_back(i);
                    result.push_back(j);
                }
            }
        }
        return result;
    }
};
// @lc code=end

