#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"

void menu()
{
	printf("***************************\n");
	printf("*********1.play************\n");
	printf("*********0.exit************\n");
	printf("***************************\n");
}

void game()
{
	char ret = 0;
	char board[ROW][COL] = { 0 };
	//初始化棋盘的函数
	InitBoard(board,ROW,COL);
	DisplayBoard(board,ROW,COL);
	while (1)
	{
		PlayMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		//判断输赢
		ret = IsWin(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}

		ComputerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		//判断输赢
		ret = IsWin(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
	}
	if (ret == '*')
	{
		printf("玩家赢\n");
	}
	else if (ret == '#')
	{
		printf("电脑赢\n");
	}
	else
	{
		printf("平局\n");
	}
}

int main()
{
	srand((unsigned int)time(NULL));//设置随机数的生成起点

	int input = 0;
	do
	{
		menu();
		printf("请选择:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("输入错误,请重新输入\n");
			break;
		}
	} while (input);

	return 0;
}