#include "Room.h"
#include "head.h"
void SetRoom(char Room[HEIGHT][WEIGHT], PPLAYER player)
{

	strcpy_s(Room[0], "1111111111111110000");
	strcpy_s(Room[1], "1000000000000010000");
	strcpy_s(Room[2], "1000000000000010000");
	strcpy_s(Room[3], "1000000000000010000");
	strcpy_s(Room[4], "1000000000000010000");
	strcpy_s(Room[5], "1000000000000010000");
	strcpy_s(Room[6], "1000000000000010000");
	strcpy_s(Room[7], "1111111111111110000");
	strcpy_s(Room[8], "0000000000000000000");
	strcpy_s(Room[9], "0000000000000000000");
	strcpy_s(Room[10], "0000000000000000000");
	strcpy_s(Room[11], "0000000000000000000");
	strcpy_s(Room[12], "0000000000000000000");
	strcpy_s(Room[13], "0000000000000000000");
	strcpy_s(Room[14], "0000000000000000000");
	strcpy_s(Room[15], "0000000000000000000");
	strcpy_s(Room[16], "0000000000000000000");
	strcpy_s(Room[17], "0000000000000000000");
	strcpy_s(Room[18], "0000000000000000000");
	strcpy_s(Room[19], "0000000000000000000");

}
void UpdateRoom(char Room[HEIGHT][WEIGHT], PPLAYER player)
{
	for (int i = 0; i < HEIGHT; i++)
	{
		for (int j = 0; j < WEIGHT; j++)
		{
			if (player->pos.x == j && player->pos.y == i)
			{
				cout << "б▀";
			}
			else if(Room[i][j] == '0')
			{
				cout << "  ";
			}
			else if (Room[i][j] == '1')
			{
				cout << "бс";
			}
		}
		cout << endl;
	}
}
void Move(char Room[HEIGHT][WEIGHT], PPLAYER player)
{
	if (GetAsyncKeyState(VK_UP) & 0x8000)
	{
		UpMove(Room, player);
		Sleep(50);
	}
	if (GetAsyncKeyState(VK_DOWN) & 0x8000)
	{
		DownMove(Room, player);
		Sleep(50);
	}
	if (GetAsyncKeyState(VK_RIGHT) & 0x8000)
	{
		RightMove(Room, player);
		Sleep(50);
	}
	if (GetAsyncKeyState(VK_LEFT) & 0x8000)
	{
		LeftMove(Room, player);
		Sleep(50);
	}
}
void UpMove(char Room[HEIGHT][WEIGHT], PPLAYER player)
{
	if (player->pos.y - 1 >= 0)
	{
		if (Room[player->pos.y - 1][player->pos.x] != '1')
		{
			player->pos.y = player->pos.y - 1;
		}
	}
}
void DownMove(char Room[HEIGHT][WEIGHT], PPLAYER player)
{
	if (player->pos.y - 1 >= 0)
	{
		if (Room[player->pos.y - 1][player->pos.x] != '1')
		{
			player->pos.y = player->pos.y - 1;
		}
	}
}
void RightMove(char Room[HEIGHT][WEIGHT], PPLAYER player)
{

}
void LeftMove(char Room[HEIGHT][WEIGHT], PPLAYER player)
{

}
void GetItem()
{

}