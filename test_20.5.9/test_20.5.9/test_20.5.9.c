#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<assert.h>
#include<stdlib.h>
#include<stdbool.h>
#include<string.h>
//1.交换两个数（用函数改变实参）
//void exchange(int *x, int *y)
//{
//	int m;
//	m = *x;//等价于m=a;
//	*x = *y;//等价于a=b;
//	*y = m;//等价于b=m;
//}
//
//int main()
//{
//	int a = 3;
//	int b = 5;
//	//用函数改变实参时，要将改变量的地址传给形参，形参为指针，指向要改变的变量
//	exchange(&a,&b);
//	printf("a=%d  b=%d\n",a,b);
//	return 0;
//}




//2.二分法查找函数（数组传参）
//形参接受数组时，接收的是首元素的地址，此处形参int arr[]的本质是int *arr,即数组指针
//int binary_search(int arr[] ,int k,int m)//二分法查找函数
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
//	//数组传参的时候，传过去一个数组名，本质上是数组首元素的地址&arr[0]
//	int ret=binary_search(arr,k,m);
//	if (ret == -1)
//		printf("找不到\n");
//	else
//	printf("找到了，下标是%d\n",ret);
//	return 0;
//}





//3.函数递归    eg:依次输出一个数的每一位
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

//练习1：不建立临时变量的条件下计算字符串长度
//int my_strlen(char *arr)
//{
//	if (*arr != '\0')
//		return 1 + my_strlen(arr + 1);//arr表示第一个元素的地址，arr+1指第二个元素的地址
//	else
//		return 0;
//
//}

//阶乘
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

//练习2 求第n个裴波那契数 1 1 2 3 5 8 13 21 34……
//方法一：递归求解，效率特别低，前面的数被大量次数的计算
//int Fb(int n)
//{
//	if (n <= 2)
//		return 1;
//	else
//		return Fb(n-1) + Fb(n-2);
//}
//方法二：
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