#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//#include<assert.h>
//#include<stdlib.h>
#include<stdbool.h>
//#include<string.h>

//1.数据存储范围，以char类型为例
//char占1个字节，共8位。范围：0000 0000~1111 1111即0~255
//int main()
//{
//	unsigned char a = 0;
//	for (a = 0; a < 256; a++)//循环所少次呢？答案为无数次，死循环。因为char范围为0~255，当a为255时，a+1为0
//	{
//		printf(" ... ");
//	}
//	return 0;
//}

//2.大小端
//int main()
//{
//	int a = 1;//a:00 00 00 01(十六进制)，
//	int b = 123456789; //07 5b cd 15
//	printf("%d  %d\n",a,b);
//	return 0;
//}
//但是观察内存发现，a的存储为：01 00 00 00   b的存储为：15 cd 5b 07
//即小端模式：数据的高位存放在内存的高位，数据的低位存放在内存的底位。

//3.判断计算机大小端
//bool Judge()
//{
//	int i = 1;
//	return *(char*)&i == 1;
//}
//int main()
//{
//	bool m = Judge();
//	if (m)
//		printf("该计算机为小端模式\n");
//	else
//		printf("该计算机为大端模式\n");
//	return 0;
//}

//杨辉三角
//int main()
//{
//	int n,i,j;
//	int a[10][10];//最多10阶
//	while (1)
//	{
//		printf("请输入阶数：\n");
//		scanf("%d", &n);
//		if (n<0 || n>10)
//			printf("输入有误，请重新输入：\n");
//		else
//			break;
//	}
//	
//	for (i = 0; i < n; i++)
//	{
//		a[i][0] = 1;
//		a[i][i] = 1;
//		for (j = 1; j < i; j++)
//		{
//			a[i][j] = a[i - 1][j - 1] + a[i - 1][j];
//		}
//	}
//
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j<=i; j++)
//		{
//			printf("%2d  ", a[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//日本某地发生了一件谋杀案，警察通过排查确定杀人凶手必为4个嫌疑犯
//的一个。以下为4个嫌疑犯的供词。
//A说：不是我。
//B说：是C。
//C说：是D。
//D说：C在胡说
//已知3个人说了真话，1个人说的是假话。

//int main()
//{
//	int killer = 0;
//	for (killer = 'a'; killer <= 'd'; killer++)
//	{
//		if ((killer != 'a') + (killer == 'c') + (killer == 'd') + (killer != 'd') == 3)
//		{
//			printf("killer = %c\n", killer);
//		}
//	}
//
//	return 0;
//}

//5位运动员参加了10米台跳水比赛，有人让他们预测比赛结果：
//A选手说：B第二，我第三；
//B选手说：我第二，E第四；
//C选手说：我第一，D第二；
//D选手说：C最后，我第三；
//E选手说：我第四，A第一；
//比赛结束后，每位选手都说对了一半，请编程确定比赛的名次。
//
//int main()
//{
//	int a,b,c,d,e;
//	for (a=1;a <= 5;a++)
//	{
//		for (b = 1; b <= 5; b++)
//		{
//			for (c = 1; c <= 5; c++)
//			{
//				for (d = 1; d <= 5; d++)
//				{
//					for (e = 1; e <= 5; e++)
//					{
//						if (((b==2)^(a==3))&&((b==2)^(e==4))&&((c==1)^(d==2))&&((c==5)^(d==3))&&((e==4)^(a==1)))
//						{
//							if((a != b) && (a != c) && (a != d) && (a != e) && (b != c) && (b != d) && (b != e) && (c != d) && (c != e) && (e != d))
//							printf("比赛名次为：\n a:第%d名\n b:第%d名\n c:第%d名\n d:第%d名\n e:第%d名\n ", a,b,c,d,e);
//						}
//					}
//				}
//			}
//		}
//	}
//
//	return 0;
//}


