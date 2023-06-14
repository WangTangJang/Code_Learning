// 试计算在区间 1 到 n的所有整数中，数字x(0 ≤ x ≤ 9)共出现了多少次？
// 例如，在 1到11中，即在 1,2,3,4,5,6,7,8,9,10,11 中，数字 1 出现了 4 次。

#include <iostream>

using namespace std;

int main(){
    
    int n, x;

    cin >> n >> x;
    int count = 0;
    for(int i = 1; i <= n; i++){
        //获取i有多少位,且遍历每一位数
        int temp = i;
        while(temp > 0){
            //提取一个整数的个位数
            int digit = temp % 10;
            if(digit == x){
                count++;
            }
            temp /= 10;//让当前十位变成个位
        }
    }
    cout << count << endl;
    return 0;
}