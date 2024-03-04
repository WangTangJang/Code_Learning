#include <stdio.h>
#include <math.h>
int main()
{
    int a, b;
    float sum;
    // 限制a和b的范围,a只能小于等于100000,b只能小于等于9
    scanf("%d %d", &a, &b);
    if (a > 100000 || b > 9)
    {
        printf("error");
        return 0;
    }
    sum = a + b * 0.1;
    // 让sum的值除去1.9
    sum = sum / 1.9;
    printf("%.2f", sum);
    return 0;
    
}