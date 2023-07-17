/*
 * @lc app=leetcode.cn id=9 lang=cpp
 *
 * [9] 回文数
 */

// @lc code=start
class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0 ) return false;
        // 求出最高位的数字
        int div = 1;
        while (x / div >= 10) {
            div *= 10;  
        }
        cout << "求余：" << 253%100<<endl;
        // 从两端向中间遍历比较
        while (x > 0) {
            
            // 取出左端的数字
            int left = x / div;
            
            // 取出右端的数字
            int right = x % 10;  
            // 比较左右两端数字
            if (left != right) return false; 
            
            // 取余，去除最左端的数
            x = x % div;
            cout << x<<endl;
            // 除十，去除最右端的数
            x = x / 10;
            cout << x<<endl;
            // x = (x % div) / 10;
            //两边各自去除一个数字，所以div要减少两位才能变更到最高数所在的位置
            div /= 100; 
        }
        return true;
    }
};
// @lc code=end

