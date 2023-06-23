// 题目描述
// 输入一个字符串，输入的只有两种字符，一种是字母，一种是空格。现在求一共有几个单词。
// 注意，有可能有多个空格连在一起，开头和结尾都有可能有空格。
// 输入
// 一行字符串
// 输出
// 单词的个数
// 样例输入
// To be or not to be is a question
// 样例输出
// 9
#include <iostream>
using namespace std;
int countWords(string s);
int main(){
    //输入一个字符串
    string str;
    getline(cin, str);
    int count = 0;
    count = countWords(str);
    cout << count << endl;
    return 0;
}
int countWords(string str){
    int count = 0;
    bool inword = false;
    for (char c : str){
        if (c == ' ')
        {
            if (inword)
            {
                inword = false;
            }
        }
        else{
            if (!inword){
                inword = true;
                count++;
            }
        }
    }
    return count;
}