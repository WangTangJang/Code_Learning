/*
 * @lc app=leetcode.cn id=20 lang=cpp
 *
 * [20] 有效的括号
 */

// @lc code=start
#include <unordered_map>
#include <stack>
#include <string>

class Solution {
private:
    std::stack<char> myStack;
    std::unordered_map<char, char> bracketPairs = {
        {')', '('},
        {']', '['},
        {'}', '{'}
    };

public:
    bool isValid(const std::string& s) {
        cout<< bracketPairs['('];
        for (char ch : s) {
            if (ch == '(' || ch == '{' || ch == '[') {
                myStack.push(ch);
            } else {
                if (myStack.empty() || myStack.top() != bracketPairs[ch]) {
                    return false;
                }
                myStack.pop();
            }
        }
        return myStack.empty();
    }
};

// @lc code=end

