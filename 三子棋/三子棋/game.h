#define _CRT_SECURE_NO_WARNINGS 1
#ifndef __GAME_H__
#define __GAME_H__
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#define ROW 3
#define COL 3
void printboard(char board[ROW][COL], int row, int col); //��ӡ����
void initboard(char board[ROW][COL], int row, int col); //��ʼ������
void playermove(char board[ROW][COL], int row, int col); //�������
void computermove(char board[ROW][COL], int row, int col); //��������
char checkwin(char board[ROW][COL], int row, int col); //����Ӯ
int isfull(char board[ROW][COL], int row, int col); //�ж������Ƿ�Ϊ��
#endif //__GAME_H__
