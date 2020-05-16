#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"
//��ӡ����
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
//��ʼ��
void initboard(char board[ROW][COL], int row, int col)
{
	memset(board, ' ', row * col * sizeof(board[0][0]));
}
//�����
void playermove(char board[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	printf("����ߣ�\n");
	while (1)
	{
		printf("����������: ");
		scanf("%d%d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col && board[x - 1][y - 1] == ' ')
		{
			board[x - 1][y - 1] = 'X';
			break;
		}
		else
			printf("���겻�Ϸ�������������\n");
	}
}
//������
void computermove(char board[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	printf("�����ߣ�\n");
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
//�������Ƿ�����
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
//����Ӯ
char checkwin(char board[ROW][COL], int row, int col)
{
	int i = 0;
	//1.���Ӯ ���ء�X��2.����Ӯ ���� ��0��
	for (i = 0; i < row; i++) //����
	{
		if (board[i][0] == board[i][1] && board[i][1] == board[i][2])
			return board[i][0];
	}
	for (i = 0; i < col; i++) //����
	{
		if (board[0][i] == board[1][i] && board[1][i] == board[2][i])
			return board[0][i];
	}
	if (board[0][0] == board[1][1] && board[1][1] == board[2][2]) //�Խ���
		return board[0][0];
	if (board[0][2] == board[1][1] && board[1][1] == board[2][0])
		return board[0][0];
	//3.ƽ�� ���� ��Q��//4.������ ���� ' '
	if (isfull(board, ROW, COL))
		return 'Q';
	else
		return ' ';
}
