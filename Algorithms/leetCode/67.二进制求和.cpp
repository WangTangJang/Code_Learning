/*
 * @lc app=leetcode.cn id=67 lang=cpp
 *
 * [67] 二进制求和
 */

// @lc code=start
class Solution {
public:
    string addBinary(string a, string b) {
        // 一个变量存放a的最后一个数量的下标
        int indexA = a.length()-1;
        // 一个变量存放b的最后一个数量的下标
        int indexB = b.length()-1;
        // 存放进位的变量
        int carry = 0;
        // 存放结果
        string result;

        while(indexA >= 0 || indexB >= 0 || carry >0){
            int sum = carry;
            if(indexA >= 0){
                // 通过减去字符‘0’的ASCII码值，即可得到数字值
                sum += (a[indexA]-'0');
                indexA--;
            }
            if(indexB >= 0){
                // 通过减去字符‘0’的ASCII码值，即可得到数字值
                sum += (b[indexB]-'0');
                indexB--;
            }
            carry = sum / 2; // 计算进位
            sum = sum % 2;   // 计算当前位的值
            result = to_string(sum) + result; // 将当前位的值加入到结果字符串的最前面
        }
        return result;
    }
};
// @lc code=end

