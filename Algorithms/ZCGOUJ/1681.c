// 伦敦奥运会要到了，小鱼在拼命练习游泳准备参加游泳比赛，可怜的小鱼并不知道鱼类是不能参加人类的奥运会的。
// 这一天，小鱼给自己的游泳时间做了精确的计时（本题中的计时都按24小时制计算），它发现自己从a时b分一直游泳到当天的c时d分，请你帮小鱼计算一下，它这天一共游了多少时间呢？
// 小鱼游的好辛苦呀，你可不要算错了哦。

#include <stdio.h>

 
int main(){
     
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);

    int minute = 0;
    int hour = c - a;
    if (d > b)
    {
        minute = d -b;
    }else if(d < b){
        minute = 60-b+d;
        hour--;
    }
    printf("%d %d\n", hour, minute);
    return 0;
}