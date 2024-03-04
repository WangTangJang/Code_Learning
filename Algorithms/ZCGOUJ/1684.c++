// 陶陶家的院子里有一棵苹果树，每到秋天树上就会结出10个苹果。苹果成熟的时候，陶陶就会跑去摘苹果。陶陶有个d厘米高的板凳，
//当她不能直接用手摘到苹果的时候，就会踩到板凳上再试试。
// 现在已知10个苹果到地面的高度，以及陶陶把手伸直的时候能够达到的最大高度，请帮陶陶算一下她能够摘到的苹果的数目。
//假设她碰到苹果，苹果就会掉下来。

#include <iostream>
#include <vector>

using namespace std;

int main() {
    int arr[11];
    //输入十个数
    int h, b;
    for(int i = 0; i < 10; i++){
        cin >> arr[i];
    }
    // 再输入两个数,分别表示手伸直能到底的高度和板凳的高度
    cin >> h >> b;
    int ans = 0;
    for(int i = 0; i < 10; i++){
        if(arr[i] <= h+b){
            ans++;
        }
    }
    cout << ans << endl;
    return 0;
}