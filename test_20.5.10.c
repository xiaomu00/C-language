#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>


//1.用冒泡排序法将数列从大到小排列
void Bubble_sort(int *ast,int n)
{
	int i,ii,m;
	int j = n;
	//趟数
	for (i = 0; i < j-1; i++)
	{
		//每一趟的实现过程
		int flg = 1;//当某一趟下来没有要交换的数，说明已经有序，不需要在继续进行排序
		for (ii = 0; ii < j - i-1; ii++)
		{
			if (ast[ii] < ast[ii + 1])
			{
				m = ast[ii];
				ast[ii] = ast[ii + 1];
				ast[ii + 1] = m;
				flg = 0;
			}
			if (flg==1)
			{
				break;
			}
			
		}
		
	}
	
}

int main()

{
	int i;
	int arr[] = {2,43,54,34,25,56,23,66,8,11,4,6,9,1};
	int j = sizeof(arr) / sizeof(arr[0]);
	Bubble_sort(arr,j);
	for (i = 0; i < j; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}


 














