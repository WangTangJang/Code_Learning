/*
 * @lc app=leetcode.cn id=58 lang=cpp
 *
 * [58] 最后一个单词的长度
 */

// @lc code=start
class Solution {
public:
    int lengthOfLastWord(string s) {
        trim(s);
        int i = s.length()-1;
        while(i>=0){
            if(s[i] == ' '){
                break;
            }else{
                i--;
            }
        }
        return s.length()-(i+1);
    }
    void trim(std::string& s) {
        // 删除前导空格
        auto firstNonSpace = std::find_if(s.begin(), s.end(), [](char c) { return !std::isspace(c); });
        s = std::string(firstNonSpace, s.end());

        // 删除尾随空格
        auto lastNonSpace = std::find_if(s.rbegin(), s.rend(), [](char c) { return !std::isspace(c); });
        s = std::string(s.begin(), lastNonSpace.base());
    }
    
};
// @lc code=end

