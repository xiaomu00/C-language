#define _CRT_SECURE_NO_WARNINGS 1


//������Ϸ
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
	//����һ�������
	int m = rand() % 100 + 1;
	//�ж�
	while (1)
	{
		printf("��������µ�����\n");
		scanf("%d", &n);
		if (n<m)
			printf("��С�ˣ������²£�\n");
		else if (n>m)
			printf("�´��ˣ������²£�\n");
		else
		{
			printf("��ϲ���¶���\n");
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
		printf("��ѡ��\n");
		scanf("%d", &a);
		switch (a)
		{
		case 0:
			printf("�����ˣ��˳���Ϸ\n");
			break;
		case 1:
			printf("������\n");
			game();
			break;
		default:
			printf("ѡ�����\n");
			break;
		}
	} while (a);
	return 0;
}

//�ַ������������м���
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
//	printf("���������룺\n");
//	scanf("%s", mima);
//	printf("��ȷ�����루Y/N����\n");
//	while ((ch = getchar()) != '\n')
//	{
//		;
//	}//�����ǽ�scanf������ַ����е�\n֮ǰʣ��Ķ������ߣ���ջ�����
//	ch = getchar();
//	if (ch == 'Y')
//		printf("����ȷ�ϳɹ�\n");
//	else
//		printf("����ȷ��ʧ��\n");
//	return 0;
//}







//1~200�ڵ�����
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



//�����������Լ��
//int main()
//{
//	int a = 284;
//	int b = 352;
//	int min = (a < b ? a : b);
//	while (1)
//	{
//		if (a%min == 0 && b%min == 0)
//		{
//			printf("���Լ��Ϊ%d\n", min);
//			break;
//		}
//		min--;
//	}
//	return 0;
//}


//����0~100�ڵ�����
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



//��������С�������
//int main()
//{
//	int a, b, c;
//	int cnt;
//	printf("��������������\n");
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
//	printf("���������Ӵ�СΪ��%d  %d  %d\n", a, b, c);
//	return 0;
//}
