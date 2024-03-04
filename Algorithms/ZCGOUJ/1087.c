// 周末期间，阿飞学长觉得在寝室过于懒散，于是决定去操场散散步，途中恰好碰到了学业压力很大的猪猪学姐，于是两人决定在一起玩一个很好玩的游戏。
// 游戏规定：一共有n堆小猪
// ，编号为1—n，现在两个人轮流拿小猪，每个人拿第x堆的同时，要拿第⌊x/2⌋、第⌊⌊x/2⌋/2⌋堆、……、第1堆，谁最后一个拿完谁获胜。阿飞学长很聪明，所以让猪猪学姐先开始拿，如果猪猪学姐获胜就输入Win，反之如果阿飞学长获胜就输入Lose。

#include <stdio.h>
#include <math.h>

int main() {
    int n;
    scanf("%d", &n);
    // 判断n是否是2的幂次方
    int isPowerOfTwo = (n & (n - 1)) == 0;

    if (isPowerOfTwo) {
        printf("Lose\n");
    } else {
        printf("Win\n");
    }
    return 0;
}
