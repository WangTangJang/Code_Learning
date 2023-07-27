/*
 * @lc app=leetcode.cn id=58 lang=java
 *
 * [58] 最后一个单词的长度
 */

// @lc code=start
class Solution {
    public int lengthOfLastWord(String s) {
        s = s.trim();
        int i = s.length()-1;

        int wordLength = 0;
        while(i>=0){
            if(s.charAt(i)==' '){
                break;
            }else{
                wordLength++;
            }
            i--;
        }
        return wordLength;
    }
}
// @lc code=end

