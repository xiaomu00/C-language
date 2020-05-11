#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//#include<assert.h>
//#include<stdlib.h>
//#include<stdbool.h>
//#include<string.h>



//1.乘法表
//void multiplication_table(n)
//{
//	int i, j;
//	for (i = 1; i<=n; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			printf("%2d *%2d =%2d  ", j, i, j*i);
//		}
//		printf("\n");
//	}
//
//}
//
//int main()
//{
//	int n;
//	printf("请输入乘法表的阶数：\n");
//	scanf("%d",&n);
//	multiplication_table(n);
//	return 0;
//}


//2.将字符串倒序排列
//常规方法
//void rrr(char *arr)
//{
//
//	int l = 0;
//	int r = strlen(arr) - 1;
//	printf("%d\n", r);
//	while (l < r)
//	{
//
//		char a = arr[l];
//		arr[l] = arr[r];
//		arr[r] = a;
//		l++;
//		r--;
//	}
//}
//递归方法
//void rrr(char *arr)
//{
//	char a = *arr;
//	int len = strlen(arr) - 1;
//	*arr = *(arr + len);
//	*(arr + len) = '\0';
//	if (strlen(arr+1)>=2)
//	rrr(arr+1);
//	*(arr + len) = a;
//}
//int main()
//{
//	char arr[] = "hello bit";
//	rrr(arr);
//	printf("%s\n", arr);
//	return 0;
//}

//一只青蛙一次可以跳上1级台阶，也可以跳上2级。求该青蛙跳上一个n级的台阶总共有多少种跳法？
//int Fibonacci(int n)
//{
//	if (n == 1)
//		return 1;
//	else if (n == 2)
//		return 2;
//	else
//		return Fibonacci(n-1)+Fibonacci(n-2);
//}
//
//int main()
//{
//	int n;
//	printf("请输入阶数：\n");
//	scanf("%d",&n);
//	int m = Fibonacci(n);
//	printf("总共有%d种跳法：\n",m);
//	return 0;
//}


int Fibonacci(int n)
{
	if (n == 1)
		return 1;
	else if (n == 2)
		return 2;
	else if (n == 3)
		return 4;
	else
		return Fibonacci(n - 1) + Fibonacci(n - 2)+Fibonacci(n - 3);
}

int main()
{
	int n;
	printf("请输入阶数：\n");
	scanf("%d", &n);
	int m = Fibonacci(n);
	printf("总共有%d种跳法：\n", m);
	return 0;
}