#define _CRT_SECURE_NO_WARNINGS 1
#ifndef __GAME_H__
#define __GAME_H__
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#define ROW 3
#define COL 3
void printboard(char board[ROW][COL], int row, int col); //打印棋盘
void initboard(char board[ROW][COL], int row, int col); //初始化棋盘
void playermove(char board[ROW][COL], int row, int col); //玩家下棋
void computermove(char board[ROW][COL], int row, int col); //电脑下棋
char checkwin(char board[ROW][COL], int row, int col); //判输赢
int isfull(char board[ROW][COL], int row, int col); //判断棋盘是否为满
#endif //__GAME_H__
