// 题目描述
// 小鱼最近被要求参加一个数字游戏，要求它把看到的一串数字（长度不一定，以0结束，最多不超过100个，数字不超过2^32-1），
// 记住了然后反着念出来(表示结束的数字0就不要念出来了)。这对小鱼的那点记忆力来说实在是太难了，你也不想想小鱼的整个脑袋才多大，其中一部分还是好吃的肉！所以请你帮小鱼编程解决这个问题。


// 输入
// 一行内输入一串整数，以0结束，以空格间隔。


// 输出
// 一行内倒着输出这一串整数，以空格间隔。（提示：末尾没有空格）

#include <iostream>
#include <vector>

int main() {

    std::vector<int> numbers;
    int num;

    while (std::cin >> num && num != 0) {
        numbers.push_back(num);
    }
    
    // 打印输入的整数,倒序
    for (int i = numbers.size() - 1; i >= 0; i--) {
        std::cout << numbers[i] << " ";
    }
    return 0;
}
