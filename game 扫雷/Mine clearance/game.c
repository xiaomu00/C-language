#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"

//��ʼ��
void Initialize(char shuzu[rows][lies], int ha, int li, char arr)
{
	int i, j;
	for (i = 0; i < ha; i++)
	{
		for (j = 0; j < li; j++)
		{
			shuzu[i][j] = arr;
		}

	}

}

//��ʾ
void reveal(char shuzu[rows][lies], int ha, int li)
{
	int i, j;
	printf("           1 2 3 4 5 6 7 8 9\n\n\n");
	for (i = 1; i <= ha; i++)
	{
		
		printf("       %d   ", i);
		for (j = 1; j <= li; j++)
		{
			printf("%c ", shuzu[i][j]);
		}
		printf("\n");
	}

}


//������
void decorate(char shuzu[rows][lies], int ha, int li)
{
	int count = leishu;
	while (count)
	{
		int x = rand() % ha + 1;
		int y = rand() % li + 1;
		if (shuzu[x][y] == '0')
		{
			shuzu[x][y] = '#';
			count--;
		}
	}

}


//����ĳ������Χ�׵ĸ���
int sum_lei(char ray[rows][lies], int x, int y)
{
	int m;
	//ע�⡮0���͡�#����ascii��
	m = (8 * '0' - (ray[x - 1][y] + ray[x - 1][y - 1] + ray[x][y - 1]
		+ ray[x + 1][y - 1] + ray[x + 1][y] + ray[x + 1][y + 1]
		+ ray[x][y + 1] + ray[x - 1][y + 1])) / 13;

	return m;
}


//�Ų���
void find_ray(char ray[rows][lies], char show[rows][lies], int ha, int li)
{
	int x, y;
	int i=0;
	while (i<ha*li-leishu)
	{
		printf("\n       ���������꣺\n");
		scanf("%d %d", &x, &y);
		system("cls");
		if (x >= 1 && x <= ha && y >= 1 && y <= li)
		{
			if (ray[x][y] == '#')
			{
				reveal(ray, row, lie);
				printf("\n\n       ���ź�������ը���ˣ�");
				printf("\n       ��ѡ���Ƿ����¿�ʼ��Ϸ\n\n");
				menu();
				break;
			}
			else
			{
				int ls=sum_lei(ray,x, y);
				show[x][y] = '0' + ls;
					i++;
					reveal(show, row, lie);	
			}
		}
		else
		{
			printf("       �����������������룡\n");
		}
	}
	if (i==ha*li - leishu)
	{
		reveal(ray, row, lie);
		printf("\n       ��ϲ�㣬���׳ɹ���\n\n");
		printf("\n       ��ѡ���Ƿ����¿�ʼ��Ϸ\n\n");
		menu();
	}
}



















