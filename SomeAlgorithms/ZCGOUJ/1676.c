// 已知：Sn= 1+1/2+1/3+…+1/n。显然对于任意一个整数K，当n足够大的时候，Sn大于K。
// 现给出一个整数K（1≤k≤15），要求计算出一个最小的n；使得Sn>K。
#include <stdio.h>
int main()
{
    //输入一个K
    int k;
    scanf("%d",&k);
    //Sn= 1+1/2+1/3+…+1/n, 循环直到Sn大于k
    float sn=1;
    int n=1;
    while(sn<=k)
    {
        sn+=1.0/n;
        //输出n等于多少时,sn等于多少
        printf("n=%d,sn=%f\n",n,sn);
        n=n+1;
    }
    printf("%d",n-1);
    return 0;
}
