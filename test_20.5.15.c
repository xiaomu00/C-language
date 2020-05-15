#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<assert.h>
#include<stdlib.h>
#include<stdbool.h>
#include<string.h>


//�����ʼ������ֵ����ʾ�����������齻��
int n;
int n_a;
int n_b;
//��ʼ������
void Init(int *str, int num)
{
	for (int i = 0; i < num; i++)
	{
		*(str+i)= 0;
	}
}
//��������
void Input(int *str, int num,int *nx)
{
	*nx = num + 1;
	int i = 0;
	int m;
	while (*nx>num)
	{
		printf("��Ҫ���뼸����ֵ��");
		scanf("%d", nx);
		if (*nx > num)
			printf("�Բ��𣬷�Χ�ѳ��������������룺");
	}
	printf("��������ֵ����-1����");
	while (scanf("%d", &m),m!=-1 )
	{
		*(str + i) = m;
		i++;
	}
	i = 0;
}
//������ʾ
void Show(int *str, int num)
{
	for (int i = 0; i < num; i++)
	{
		printf("%2d  ",*(str+i));
	}
	printf("\n");
}
//��������
void Reverse(int *str, int num)
{
	int x;
	printf("����ǰ������Ϊ��\n");
	Show(str, num);
	int count = num / 2;
	for (int i = 0; i < count; i++)
	{
		 x= *(str+i);
		 *(str + i) = *(str + num - 1 - i);
		 *(str + num - 1 - i) = x;
	}
	printf("����������Ϊ��\n");
	Show(str, num);
}

//�����齻��
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

	printf("�������a��ֵ��\n");
	Input(a, num_a,&n_a);
	printf("�������b��ֵ��\n");
	Input(b, num_b,&n_b);

	printf("\n\n����ǰ������Ǳ�Ϊ��\n");
	printf("a���飺 ");
	Show(a, n_a);
	printf("b���飺 ");
	Show(b, n_b);

	Exchange(a, b, &n_a, &n_b);

	printf("\n\n������������Ǳ�Ϊ��\n");
	printf("a���飺 ");
	Show(a, n_a);
	printf("b���飺 ");
	Show(b, n_b);
	printf("\n\na���������Ϊ��\n");
	Reverse(a, n_a); 
	printf("\n\nb���鵹���Ϊ��\n");
	Reverse(b, n_b);
	return 0;
}