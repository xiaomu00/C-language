
#include<stdio.h>
#include<stdlib.h>
#include<time.h>




#define row 9
#define lie 9

#define rows row+2
#define lies lie+2

#define leishu  14

void menu();
void test();
void Initialize(char shuzu[rows][lies], int ha, int li, char arr);
void reveal(char shuzu[rows][lies], int ha, int li);
void decorate(char shuzu[rows][lies], int ha, int li);
void find_ray(char ray[rows][lies], char show[rows][lies], int ha, int li);
int sum_lei(char ray[rows][lies], int x, int y);