#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main() {
    UINT codePage = GetConsoleOutputCP();

    printf("代码格式为: %u\n", codePage);
    getchar();
    return 0;
}
