// 这道题用于测试文件输入输出，请注意使用文件输入输出，而非标准输入输出。
// 输入一个正整数 a ，输出这个数 a 。
#include <stdio.h>

int main()
{
    FILE *inputFile=NULL;
    FILE *outputFile=NULL;
    inputFile = fopen("copycat.in","r");
    outputFile = fopen("copycat.out","w");
    if (inputFile==NULL || outputFile == NULL)
    {
        printf("打开文件失败");
        return 1;
    }
    int T;
    fscanf(inputFile,"%d",&T);
    for (int i = 0; i < T; i++)
    {
        char number[1001];
        fscanf(inputFile,"%s",number);
        fprintf(outputFile,"%s\n",number);
    }
    fclose(inputFile);
    fclose(outputFile);
    return 0;
}
