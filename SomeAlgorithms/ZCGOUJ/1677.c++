//小玉开心的在游泳，可是她很快难过的发现，自己的力气不够，游泳好累哦。已知小玉第一步能游2米，可是随着越来越累，
// 力气越来越小，她接下来的每一步都只能游出上一步距离的98%。现在小玉想知道，如果要游到距离x米的地方，她需要游多少步呢。
// 请你编程解决这个问题。
#include <iostream>
#include <cmath>
using namespace std;

int main(){
    float x;//总计需要的距离
    cin >> x;
    int step = 0;
    //创建一个float变量,表示步长
    float step_length = 2;
    //一个变量表示已经走过的路程
    float walked = 0;
    while(walked < x){
        //每一step都只能游出上一step距离的98%
        step_length = step_length *0.98;
        walked += step_length;
        //每走一步,步数加1
        step++;
    }
    cout << step << endl;
    return 0;
}
