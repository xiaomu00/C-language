#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"
//打印棋盘
void printboard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	for (i = 0; i < row; i++)
	{
		printf(" %c | %c | %c \n", board[i][0], board[i][1], board[i][2]);
		if (i<row - 1)
			printf(" ---|---|---\n");
	}
}
//初始化
void initboard(char board[ROW][COL], int row, int col)
{
	memset(board, ' ', row * col * sizeof(board[0][0]));
}
//玩家走
void playermove(char board[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	printf("玩家走：\n");
	while (1)
	{
		printf("请输入坐标: ");
		scanf("%d%d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col && board[x - 1][y - 1] == ' ')
		{
			board[x - 1][y - 1] = 'X';
			break;
		}
		else
			printf("坐标不合法，请重新输入\n");
	}
}
//电脑走
void computermove(char board[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	printf("电脑走：\n");
	while (1)
	{
		x = rand() % 3;
		y = rand() % 3;
		if (board[x][y] == ' ')
		{
			board[x][y] = '0';
			break;
		}
	}
}
//判棋盘是否满了
int isfull(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			if (board[i][j] == ' ')
				return 0;
		}
	}
	return 1;
}
//判输赢
char checkwin(char board[ROW][COL], int row, int col)
{
	int i = 0;
	//1.玩家赢 返回‘X’2.电脑赢 返回 ‘0’
	for (i = 0; i < row; i++) //三行
	{
		if (board[i][0] == board[i][1] && board[i][1] == board[i][2])
			return board[i][0];
	}
	for (i = 0; i < col; i++) //三列
	{
		if (board[0][i] == board[1][i] && board[1][i] == board[2][i])
			return board[0][i];
	}
	if (board[0][0] == board[1][1] && board[1][1] == board[2][2]) //对角线
		return board[0][0];
	if (board[0][2] == board[1][1] && board[1][1] == board[2][0])
		return board[0][0];
	//3.平局 返回 ‘Q’//4.继续玩 返回 ' '
	if (isfull(board, ROW, COL))
		return 'Q';
	else
		return ' ';
}
