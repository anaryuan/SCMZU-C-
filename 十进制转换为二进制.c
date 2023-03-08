#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int main(void)
{
        int a;
        scanf("%d", &a);
        char str[30];
        _itoa(a, str, 2);//2即是代表转换为2进制
        printf("%s", str);
    return 0;
}
