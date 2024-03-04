/*
 * @lc app=leetcode.cn id=27 lang=cpp
 *
 * [27] 移除元素
 */

// @lc code=start
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        
        int slow = 0,fast = 0;
        while (fast < nums.size()){
            //不等于指定值就让双指针同步前进。且进行交换
            // 找到一个指定值的时候，慢指针就无法前进。
            // 直到找到一个不等于指定值的值,然后让这个值与等于指定值的值进行交换.
            if(nums[fast] != val){
                nums[slow] = nums[fast];
                slow++;
            }
            fast ++;
        }
        return slow;
    }
};
// @lc code=end

