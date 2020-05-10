#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"

//初始化
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

//显示
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


//布置雷
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


//计算某坐标周围雷的个数
int sum_lei(char ray[rows][lies], int x, int y)
{
	int m;
	//注意‘0’和‘#’的ascii码
	m = (8 * '0' - (ray[x - 1][y] + ray[x - 1][y - 1] + ray[x][y - 1]
		+ ray[x + 1][y - 1] + ray[x + 1][y] + ray[x + 1][y + 1]
		+ ray[x][y + 1] + ray[x - 1][y + 1])) / 13;

	return m;
}


//排查雷
void find_ray(char ray[rows][lies], char show[rows][lies], int ha, int li)
{
	int x, y;
	int i=0;
	while (i<ha*li-leishu)
	{
		printf("\n       请输入坐标：\n");
		scanf("%d %d", &x, &y);
		system("cls");
		if (x >= 1 && x <= ha && y >= 1 && y <= li)
		{
			if (ray[x][y] == '#')
			{
				reveal(ray, row, lie);
				printf("\n\n       很遗憾，您被炸死了！");
				printf("\n       请选择是否重新开始游戏\n\n");
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
			printf("       坐标有误，请重新输入！\n");
		}
	}
	if (i==ha*li - leishu)
	{
		reveal(ray, row, lie);
		printf("\n       恭喜你，排雷成功！\n\n");
		printf("\n       请选择是否重新开始游戏\n\n");
		menu();
	}
}



















