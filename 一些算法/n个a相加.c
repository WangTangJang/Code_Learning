
#include <stdio.h>

int main()
{
    int x;
    int a=2;
    int sum=0,cache=a;
    scanf("%d",&x);
    
    for(int i=0;i<x;i++){
        sum+=cache;
        //每次都是加一位的a;
        cache=cache*10+a;
    }
    printf("%d",sum);
    return 0;
}

