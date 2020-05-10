#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"

void menu()//菜单 
{
	printf("       ********************************\n");
	printf("       ******      扫雷游戏       *****\n");
	printf("       ****玩游戏 1          退出 0****\n");
	printf("       ********************************\n");

}


void game()
{
	//雷
	char ray[rows][lies] = { 0 };
	char show[rows][lies] = { 0 };
	//初始化
	Initialize(ray, rows, lies, '0');
	Initialize(show, rows, lies, '*');
	//显示
	//reveal(ray, row, lie);//显示棋盘

	//布置雷
	decorate(ray, row, lie);
	//reveal(ray, row, lie);

	//排查雷
	find_ray(ray, show, row, lie);

}



void test()//测试
{
	int opt;
	srand((unsigned)time(NULL));
	menu();
	do
	{
		printf("       请输入选项：\n");
		scanf("%d", &opt);
		switch (opt)
		{
		case 1:
			system("cls");
			printf("       开始游戏：\n");
			game();
			break;
		case 0:
			printf("       退出游戏：\n");
			break;
		default:
			printf("       选择错误，请重新选择：\n");
			break;
		}

	} while (opt);

}


int main()
{
	
	test();
	return 0;
}
