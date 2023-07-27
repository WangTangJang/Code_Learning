/*
 * @lc app=leetcode.cn id=58 lang=cpp
 *
 * [58] 最后一个单词的长度
 */

// @lc code=start
class Solution {
public:
    int lengthOfLastWord(string s) {
        for(int i =0; i<s.length();i++){
            if(s[i] == ' '){
                cout<< i << endl;
            }
        }
    }
};
// @lc code=end

