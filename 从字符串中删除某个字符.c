#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
void DeleteChar(char *str, char c)
{
	int i, j;
	for (i = j = 0; str[i] != '\0'; i++) 
	{
		if (str[i] != c) 
		{
			str[j++] = str[i];//从第一个元素依次排序不为c的字符
		}
	}
	str[j] = '\0';//结束字符串
	
}
int main()
{
	char str[50], c;
	gets(str);
	scanf("%c", &c);
	DeleteChar(str, c);
	printf("%s", str);
	return 0;
}