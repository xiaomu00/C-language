#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<assert.h>
#include<stdlib.h>
#include<stdbool.h>
#include<string.h>
//1.�������������ú����ı�ʵ�Σ�
//void exchange(int *x, int *y)
//{
//	int m;
//	m = *x;//�ȼ���m=a;
//	*x = *y;//�ȼ���a=b;
//	*y = m;//�ȼ���b=m;
//}
//
//int main()
//{
//	int a = 3;
//	int b = 5;
//	//�ú����ı�ʵ��ʱ��Ҫ���ı����ĵ�ַ�����βΣ��β�Ϊָ�룬ָ��Ҫ�ı�ı���
//	exchange(&a,&b);
//	printf("a=%d  b=%d\n",a,b);
//	return 0;
//}




//2.���ַ����Һ��������鴫�Σ�
//�βν�������ʱ�����յ�����Ԫ�صĵ�ַ���˴��β�int arr[]�ı�����int *arr,������ָ��
//int binary_search(int arr[] ,int k,int m)//���ַ����Һ���
//{ 
//	int min = 0;
//	int max = m-1;
//	while (min<=max)
//	{
//	    int mit = (max+min) / 2;
//		if (arr[mit]<k)
//		{
//		min = mit + 1;
//		}
//		else if (arr[mit]>k)
//		{
//		max = mit - 1;
//		}
//		else
//		{
//		return mit;
//		}
//	}
//	return -1;
//}
//
//int main()
//{
//	int arr[] = {1,2,3,4,5,6,7,8,9,10};
//	int m=sizeof(arr) / sizeof(arr[0]);
//	int k;
//	scanf("%d",&k);
//	//���鴫�ε�ʱ�򣬴���ȥһ������������������������Ԫ�صĵ�ַ&arr[0]
//	int ret=binary_search(arr,k,m);
//	if (ret == -1)
//		printf("�Ҳ���\n");
//	else
//	printf("�ҵ��ˣ��±���%d\n",ret);
//	return 0;
//}





//3.�����ݹ�    eg:�������һ������ÿһλ
//void print(int i)
//{
//	if (i > 9)
//	{
//		print(i/10);
//	}
//	printf("%d ",i%10);
//}
//
//int main()
//{
//	int a;
//	scanf("%d",&a);
//	print(a);
//}

//��ϰ1����������ʱ�����������¼����ַ�������
//int my_strlen(char *arr)
//{
//	if (*arr != '\0')
//		return 1 + my_strlen(arr + 1);//arr��ʾ��һ��Ԫ�صĵ�ַ��arr+1ָ�ڶ���Ԫ�صĵ�ַ
//	else
//		return 0;
//
//}

//�׳�
//int FC(int i)
//{
//	if (i <= 1)
//		return 1;
//	else
//		return i*FC(i - 1);
//}

//int main()
//{
//	char arr[100];
//	scanf("%s",arr);
//	int len=my_strlen(arr);
//	printf("%d\n",len);
//}

//��ϰ2 ���n���Შ������ 1 1 2 3 5 8 13 21 34����
//����һ���ݹ���⣬Ч���ر�ͣ�ǰ����������������ļ���
//int Fb(int n)
//{
//	if (n <= 2)
//		return 1;
//	else
//		return Fb(n-1) + Fb(n-2);
//}
//��������
//int Fb(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 0;
//	if (n <= 2)
//		c = 1;
//	while (n > 2)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//	}
//	return c;
//}
//int main()
//{
//	int n;
//	scanf("%d",&n);
//	int m=Fb(n);
//	printf("%d\n",m);
//	return 0;
//}