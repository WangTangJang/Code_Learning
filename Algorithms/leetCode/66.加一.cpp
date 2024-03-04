/*
 * @lc app=leetcode.cn id=66 lang=cpp
 *
 * [66] 加一
 */

// @lc code=start
class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int i = digits.size()-1;


        while(i >= 0){
            if(digits[i]!=9){
                digits[i]++;
                return digits;
            }else{
                digits[i] = 0;
            }
            i--;
        }
        vector<int> digit(digits.size() + 1, 0);
        digit[0] = 1;
        return digit;
    }
};
// @lc code=end

