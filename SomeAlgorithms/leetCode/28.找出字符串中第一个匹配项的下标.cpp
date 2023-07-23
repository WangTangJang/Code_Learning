/*
 * @lc app=leetcode.cn id=28 lang=cpp
 *
 * [28] 找出字符串中第一个匹配项的下标
 */

// @lc code=start
class Solution {
public:
    int strStr(string haystack, string needle) {
        int j;
        int i = 0, ii;
        for(i =0; i<haystack.length();i++){
            ii = i;
            j = 0;
            while (j<needle.length() ){
                if(needle[j] == haystack[ii]){
                    j++; 
                    ii++;
                }else{
                    break;
                }
            }
            if(j==needle.length()){
                break;
            }
            if(haystack.length()-i-1<needle.length()){
                i = -1;
                break;
            }
        }
        return i;
    }
};
// @lc code=end

