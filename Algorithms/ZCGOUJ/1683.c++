// 原来的题目太简单，现改进让小鱼周末也休息，请已经做过重做该题。
// 有一只小鱼，它平日每天游泳 250 公里，周末休息（实行双休日)，
//假设从周 x 开始算起，过了 n(n≤100000) 天以后，小鱼一共累计游泳了多少公里呢？ 
#include <iostream>
using namespace std;
struct Schedule
{
    int dayofweek;
    int days;
};
int main(){
    int t;
    cin >> t;
    Schedule* s = new Schedule[t];
    long distance=0;
    for (size_t i = 0; i < t; i++)
    {
        cin >> s[i].dayofweek >> s[i].days;
    }
    for (size_t i = 0; i < t; i++){
        for (int j = 0; j < s[i].days; j++){
            if (s[i].dayofweek!= 6 && s[i].dayofweek!= 7 )
            {
                distance += 250;
            }
            s[i].dayofweek++;
            if (s[i].dayofweek > 7){
                s[i].dayofweek = 1;
            }
        }
    }
    cout << distance << endl;
    return 0;
}