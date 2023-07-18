/*
 * @lc app=leetcode.cn id=14 lang=cpp
 *
 * [14] 最长公共前缀
 */

// @lc code=start
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        
        if (strs.empty())
        {
            return "";
        }
        

        string prefix = strs[0];
        for (size_t i = 0; i < strs.size(); i++)
        {
            int j=0;
            while (j<prefix.length() && j<strs[i].length() && prefix[j]==strs[i][j])
            {
                j++;
            }
            prefix = prefix.substr(0 , j);
        }
        
        return prefix;
    }
};
// @lc code=end

