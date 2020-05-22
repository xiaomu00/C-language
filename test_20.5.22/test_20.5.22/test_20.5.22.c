#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<assert.h>
#include<stdlib.h>
#include<stdbool.h>
#include<string.h>


//输入一个数，求出这个数离 0 1 1 2 3 5 8 13  21……的最小距离，如输入15，输出2
//int Fib(int n)
//{
//	int a, b, c;
//	a = 0;
//	b = 1;
//	if (n == 0)
//		c = 0;
//	else if (n == 1)
//		c = 1;
//	else
//	for (int i = 0; i < n; i++)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//	}
//	return c;
//}
//
//int main()
//{
//	int a,m,i;
//	printf("请输入一个数：\n");
//	scanf("%d",&a);
//	if (a <= 3)
//		m = 0;
//	else
//	{
//		for (i = 0; i < 1000; i++)
//		{
//			if (a <= Fib(i))
//			{
//				break;
//			}
//		}
//		int b = a - Fib(i - 1);
//		int c =  Fib(i)-a;
//		m = (b<c)?b:c;
//	}
//
//	printf("%d\n",m);
//	return 0;
//}

//输入一个字符串，每遇到一个空格，就将空格转化为666，如AB C  D转化后为AB666C666666D
int main()
{
	char arr[20] = { 0 };
	char b[100] = { 0 };
	int i = 0;
	int j = 0;
	printf("请输入字符串:\n");
	gets(arr);
	printf("您输入字符串是:");
	puts(arr);
	printf("\n");

	while (arr[i] != '\0')
	{
		if (arr[i] != ' ')
		{
			b[j] = arr[i];
		}
		else
		{
			b[j] = '6';
			b[j + 1] = '6';
			b[j + 2] = '6';
			j = j + 2;
		}
		i++;
		j++;
	}
	printf("改变后的字符串是:");
	puts(b);
	printf("\n");
	return 0;
}