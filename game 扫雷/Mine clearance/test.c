#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"

void menu()//�˵� 
{
	printf("       ********************************\n");
	printf("       ******      ɨ����Ϸ       *****\n");
	printf("       ****����Ϸ 1          �˳� 0****\n");
	printf("       ********************************\n");

}


void game()
{
	//��
	char ray[rows][lies] = { 0 };
	char show[rows][lies] = { 0 };
	//��ʼ��
	Initialize(ray, rows, lies, '0');
	Initialize(show, rows, lies, '*');
	//��ʾ
	//reveal(ray, row, lie);//��ʾ����

	//������
	decorate(ray, row, lie);
	//reveal(ray, row, lie);

	//�Ų���
	find_ray(ray, show, row, lie);

}



void test()//����
{
	int opt;
	srand((unsigned)time(NULL));
	menu();
	do
	{
		printf("       ������ѡ�\n");
		scanf("%d", &opt);
		switch (opt)
		{
		case 1:
			system("cls");
			printf("       ��ʼ��Ϸ��\n");
			game();
			break;
		case 0:
			printf("       �˳���Ϸ��\n");
			break;
		default:
			printf("       ѡ�����������ѡ��\n");
			break;
		}

	} while (opt);

}


int main()
{
	
	test();
	return 0;
}
