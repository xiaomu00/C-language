#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//#include<assert.h>
//#include<stdlib.h>
//#include<stdbool.h>
//#include<string.h>



//1.�˷���
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
//	printf("������˷���Ľ�����\n");
//	scanf("%d",&n);
//	multiplication_table(n);
//	return 0;
//}


//2.���ַ�����������
//���淽��
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
//�ݹ鷽��
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

//һֻ����һ�ο�������1��̨�ף�Ҳ��������2���������������һ��n����̨���ܹ��ж�����������
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
//	printf("�����������\n");
//	scanf("%d",&n);
//	int m = Fibonacci(n);
//	printf("�ܹ���%d��������\n",m);
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
	printf("�����������\n");
	scanf("%d", &n);
	int m = Fibonacci(n);
	printf("�ܹ���%d��������\n", m);
	return 0;
}