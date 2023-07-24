/*
 * @lc app=leetcode.cn id=35 lang=cpp
 *
 * [35] 搜索插入位置
 */

// @lc code=start
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        if (nums.size()<1) return -1;
        int left = 0;
        int rigth = nums.size();

        while (left < rigth){
            int mid = (left + rigth)/2;
            if(nums[mid] == target){
                rigth = mid;
            } else if(nums[mid] < target){
                left = mid +1;
            } else if(nums[mid] > target){
                rigth = mid;
            }
        }
        return rigth;
    }
};
// @lc code=end

