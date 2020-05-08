#define _CRT_SECURE_NO_WARNINGS 1


//猜字游戏
#include<stdio.h>
#include<stdlib.h>
void menu()
{
	printf("***************************************\n");
	printf("****    1.play      0.exit    *********\n");
	printf("***************************************\n");
}

void game()
{

	int n;
	//生成一个随机数
	int m = rand() % 100 + 1;
	//判断
	while (1)
	{
		printf("请输入你猜的数：\n");
		scanf("%d", &n);
		if (n<m)
			printf("猜小了，请重新猜：\n");
		else if (n>m)
			printf("猜大了，请重新猜：\n");
		else
		{
			printf("恭喜您猜对了\n");
			break;
		}
	}
}


int main()
{
	int a;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("请选择：\n");
		scanf("%d", &a);
		switch (a)
		{
		case 0:
			printf("不玩了，退出游戏\n");
			break;
		case 1:
			printf("猜数字\n");
			game();
			break;
		default:
			printf("选择错误\n");
			break;
		}
	} while (a);
	return 0;
}

//字符串从两边向中间汇聚
//#include<stdio.h>
//#include<windows.h>
//int main()
//{
//	char ch1[] = "djfdkfkslfjlks";
//	char ch2[] = "##############";
//	int lst = sizeof(ch1) / sizeof(ch1[0]);
//	int a = lst / 2;
//	int i;
//	printf("%s\n", ch2);
//	Sleep(1000);
//	system("cls");
//	for (i = 0; i <lst / 2; i++)
//	{
//		ch2[i] = ch1[i];
//		ch2[lst - i - 2] = ch1[lst - i - 2];
//		printf("%s\n", ch2);
//		Sleep(1000);
//		system("cls");
//	}
//	//ch2[i+1] = ch1[i+1];
//	//printf("%s\n", ch2);
//	return 0;
//}
//
//





//
//int main()
//{
//	char mima[20];
//	int ch;
//	printf("请输入密码：\n");
//	scanf("%s", mima);
//	printf("请确认密码（Y/N）：\n");
//	while ((ch = getchar()) != '\n')
//	{
//		;
//	}//作用是将scanf输入的字符串中的\n之前剩余的东西拿走，清空缓冲区
//	ch = getchar();
//	if (ch == 'Y')
//		printf("密码确认成功\n");
//	else
//		printf("密码确认失败\n");
//	return 0;
//}







//1~200内的素数
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	int i;
//	for (i = 1; i < 200; i += 2)
//	{
//		int j = 2;
//		while (j <= sqrt(i))
//		{
//			if (i%j == 0)
//			{
//				break;
//			}
//			j++;
//		}
//		if (j > sqrt(i))
//			printf("%d ", i);
//	}
//	return 0;
//}



//两个数的最大公约数
//int main()
//{
//	int a = 284;
//	int b = 352;
//	int min = (a < b ? a : b);
//	while (1)
//	{
//		if (a%min == 0 && b%min == 0)
//		{
//			printf("最大公约数为%d\n", min);
//			break;
//		}
//		min--;
//	}
//	return 0;
//}


//输入0~100内的奇数
//int main()
//{
//	int i;
//	int a = 0;
//    for (i = 0; i <= 100; i++)	{
//		if (i % 2 == 1)
//		{
//			a++;
//			printf("%2d  ", i);
//		}
//		if (a % 5 == 0)
//			printf("\n");
//
//	}
//
//	return 0;
//
//}



//三个数从小到大输出
//int main()
//{
//	int a, b, c;
//	int cnt;
//	printf("请输入与三个数\n");
//	scanf("%d,%d,%d", &a, &b, &c);
//	if (a > b)
//	{
//		cnt = a;
//		a = b;
//		b = cnt;
//	}
//	if (b>c)
//	{
//		cnt = b;
//		b = c;
//		c = cnt;
//	}
//	if (a>b)
//	{
//		cnt = a;
//		a = b;
//		b = cnt;
//	}
//	printf("这三个数从大到小为：%d  %d  %d\n", a, b, c);
//	return 0;
//}
