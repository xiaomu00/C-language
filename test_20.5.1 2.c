#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//#include<assert.h>
//#include<stdlib.h>
#include<stdbool.h>
//#include<string.h>

//1.���ݴ洢��Χ����char����Ϊ��
//charռ1���ֽڣ���8λ����Χ��0000 0000~1111 1111��0~255
//int main()
//{
//	unsigned char a = 0;
//	for (a = 0; a < 256; a++)//ѭ�����ٴ��أ���Ϊ�����Σ���ѭ������Ϊchar��ΧΪ0~255����aΪ255ʱ��a+1Ϊ0
//	{
//		printf(" ... ");
//	}
//	return 0;
//}

//2.��С��
//int main()
//{
//	int a = 1;//a:00 00 00 01(ʮ������)��
//	int b = 123456789; //07 5b cd 15
//	printf("%d  %d\n",a,b);
//	return 0;
//}
//���ǹ۲��ڴ淢�֣�a�Ĵ洢Ϊ��01 00 00 00   b�Ĵ洢Ϊ��15 cd 5b 07
//��С��ģʽ�����ݵĸ�λ������ڴ�ĸ�λ�����ݵĵ�λ������ڴ�ĵ�λ��

//3.�жϼ������С��
//bool Judge()
//{
//	int i = 1;
//	return *(char*)&i == 1;
//}
//int main()
//{
//	bool m = Judge();
//	if (m)
//		printf("�ü����ΪС��ģʽ\n");
//	else
//		printf("�ü����Ϊ���ģʽ\n");
//	return 0;
//}

//�������
//int main()
//{
//	int n,i,j;
//	int a[10][10];//���10��
//	while (1)
//	{
//		printf("�����������\n");
//		scanf("%d", &n);
//		if (n<0 || n>10)
//			printf("�����������������룺\n");
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

//�ձ�ĳ�ط�����һ��ıɱ��������ͨ���Ų�ȷ��ɱ�����ֱ�Ϊ4�����ɷ�
//��һ��������Ϊ4�����ɷ��Ĺ��ʡ�
//A˵�������ҡ�
//B˵����C��
//C˵����D��
//D˵��C�ں�˵
//��֪3����˵���滰��1����˵���Ǽٻ���

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

//5λ�˶�Ա�μ���10��̨��ˮ����������������Ԥ����������
//Aѡ��˵��B�ڶ����ҵ�����
//Bѡ��˵���ҵڶ���E���ģ�
//Cѡ��˵���ҵ�һ��D�ڶ���
//Dѡ��˵��C����ҵ�����
//Eѡ��˵���ҵ��ģ�A��һ��
//����������ÿλѡ�ֶ�˵����һ�룬����ȷ�����������Ρ�
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
//							printf("��������Ϊ��\n a:��%d��\n b:��%d��\n c:��%d��\n d:��%d��\n e:��%d��\n ", a,b,c,d,e);
//						}
//					}
//				}
//			}
//		}
//	}
//
//	return 0;
//}

