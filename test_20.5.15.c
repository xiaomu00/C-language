#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<assert.h>
#include<stdlib.h>
#include<stdbool.h>
#include<string.h>


//数组初始化、赋值、显示、逆序、两数组交换
int n;
int n_a;
int n_b;
//初始化数组
void Init(int *str, int num)
{
	for (int i = 0; i < num; i++)
	{
		*(str+i)= 0;
	}
}
//数组输入
void Input(int *str, int num,int *nx)
{
	*nx = num + 1;
	int i = 0;
	int m;
	while (*nx>num)
	{
		printf("您要输入几个数值？");
		scanf("%d", nx);
		if (*nx > num)
			printf("对不起，范围已超出，请重新输入：");
	}
	printf("请输入数值，以-1结束");
	while (scanf("%d", &m),m!=-1 )
	{
		*(str + i) = m;
		i++;
	}
	i = 0;
}
//数组显示
void Show(int *str, int num)
{
	for (int i = 0; i < num; i++)
	{
		printf("%2d  ",*(str+i));
	}
	printf("\n");
}
//数组逆序
void Reverse(int *str, int num)
{
	int x;
	printf("逆序前的数组为：\n");
	Show(str, num);
	int count = num / 2;
	for (int i = 0; i < count; i++)
	{
		 x= *(str+i);
		 *(str + i) = *(str + num - 1 - i);
		 *(str + num - 1 - i) = x;
	}
	printf("逆序后的数组为：\n");
	Show(str, num);
}

//两数组交换
void Exchange(int *a, int *b, int *n_a, int *n_b)
{
	int num,x;
	num = (*n_a > *n_b) ? *n_a : *n_b;
	for (int i = 0; i < num; i++)
	{
		x = *(a + i);
		*(a + i) = *(b+i);
		*(b + i) = x;
	}
	x = *n_a;
	*n_a = *n_b;
	*n_b = x;
}

int main()
{
	/*int arr[10];
	Init(arr,sizeof(arr)/sizeof(arr[0]));
	Input(arr, sizeof(arr) / sizeof(arr[0]));
	Reverse(arr,n);*/
	int a[20];
	int b[20];
	int num_a, num_b;
	num_a = sizeof(a) / sizeof(a[0]);
	num_b = sizeof(b) / sizeof(b[0]);

	Init(a, num_a);
	Init(b, num_b);

	printf("请给数组a赋值：\n");
	Input(a, num_a,&n_a);
	printf("请给数组b赋值：\n");
	Input(b, num_b,&n_b);

	printf("\n\n交换前两数组非别为：\n");
	printf("a数组： ");
	Show(a, n_a);
	printf("b数组： ");
	Show(b, n_b);

	Exchange(a, b, &n_a, &n_b);

	printf("\n\n交换后两数组非别为：\n");
	printf("a数组： ");
	Show(a, n_a);
	printf("b数组： ");
	Show(b, n_b);
	printf("\n\na数组逆序后为：\n");
	Reverse(a, n_a); 
	printf("\n\nb逆组倒序后为：\n");
	Reverse(b, n_b);
	return 0;
}