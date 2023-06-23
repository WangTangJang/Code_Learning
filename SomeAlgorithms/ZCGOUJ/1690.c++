// 将1,2,⋯,9共9个数分成3组，分别组成3个三位数，且使这3个三位数构成1:2:3的比例，试求出所有满足条件的3个三位数。
#include <iostream>
#include <vector>
using namespace std;
template<class BidirIt>
void reverse(BidirIt first, BidirIt last) {
    while ((first != last) && (first != --last)) {
        iter_swap(first++, last);  // 交换首尾元素
    }
}
template<class BidirIt>
bool next_permutation_X(BidirIt first, BidirIt last) {
    if (first == last) return false;  // 如果范围为空，返回false
    BidirIt i = last;  // 初始化i为最后一个迭代器
    if (first == --i) return false;  // 如果范围只有一个元素，返回false
    while (true) {
        BidirIt i1, i2;
        i1 = i;
        if (*--i < *i1) {  // 找到最后一个升序对 (*i < *i1)
            i2 = last;
            while (!(*i < *--i2)) {}  // 在i和i2之间找到最后一个大于i的元素
            iter_swap(i, i2);  // 交换i和i2的值
            reverse(i1, last);  // 反转i1到最后的元素
            return true;  // 返回true，生成了下一个排列
        }

        if (i == first) {  // 已经达到最小的排列
            reverse(first, last);  // 反转整个范围，回到最初的排列
            return false;  // 返回false，没有更多排列可生成
        }
    }
}
int main() {
    vector<int> numbers = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    do {
        int num1 = numbers[0] * 100 + numbers[1] * 10 + numbers[2];
        int num2 = numbers[3] * 100 + numbers[4] * 10 + numbers[5];
        int num3 = numbers[6] * 100 + numbers[7] * 10 + numbers[8];
        if (num1 * 2 == num2 && num1 * 3 == num3) {
           cout << num1 << " " << num2 << " " << num3 << endl;
        }
    } while (next_permutation_X(numbers.begin(), numbers.end()));
    return 0;
}
