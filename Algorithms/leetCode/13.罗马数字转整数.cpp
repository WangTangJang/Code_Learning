/*
 * @lc app=leetcode.cn id=13 lang=cpp
 *
 * [13] 罗马数字转整数
 */

// @lc code=start
class Solution {
public:
    int romanToInt(string s) {
        int result=0;
        for (int i = 0; i < s.length(); i++)
        {   
            switch (s[i])
            {
            case 'I':
                if (s[i+1]=='V')
                {
                    result+=4;
                    i++;
                    break;
                }else if(s[i+1]=='X'){
                    result+=9;
                    i++;
                    break;
                }
                result++;
                break;
            case 'V':
                result+=5;
                break;
            case 'X':
                if (s[i+1]=='L')
                {
                    result+=40;
                    i++;
                    break;
                }else if(s[i+1]=='C'){
                    result+=90;
                    i++;
                    break;
                }
                result+=10;
                break;
            case 'L':
                result+=50;
                break;
            case 'C':
                if (s[i+1]=='D')
                {
                    result+=400;
                    i++;
                    break;
                }else if(s[i+1]=='M'){
                    result+=900;
                    i++;
                    break;
                }
                result+=100;
                break;
            case 'D':
                result+=500;
                break;
            case 'M':
                result+=1000;
                break;
            default:
                break;
            }
            
        }
        return result;
    }
};
// @lc code=end

