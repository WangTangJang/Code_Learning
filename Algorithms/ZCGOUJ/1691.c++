// 输出1-1000内的素数分别用空格隔开最后有空格
#include <iostream>
using namespace std;
int main() {
    for (int i = 2; i <= 1000; i++) {
        bool flag = true;
        for (int j = 2; j < i; j++) {
            if (i % j == 0) {
                flag = false;
                break; 
            }
        }
        if (flag) {
            cout << i << " ";
        }
    }
    return 0;
}