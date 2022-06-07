#include "Room.h"
#include "head.h"
bool ExitRoom(PPLAYER player, PPOS pos)
{
	if (player->pos.x == pos->x && player->pos.y == pos->y)
	{
		return true;
	}
	return false;
}
void SetRoom(char Room[HEIGHT][WEIGHT], PPLAYER player,PPOS pos,int stage)
{
	switch (stage)
	{
	case 1:
		player->pos.x = 1;
		player->pos.y = 1;
		pos->x = 2;
		pos->y = 12;
		strcpy_s(Room[0], "1111111111111110000");
		strcpy_s(Room[1], "1000000000000010000");
		strcpy_s(Room[2], "1000000000030010000");
		strcpy_s(Room[3], "1000000000000010000");
		strcpy_s(Room[4], "1000000000000010000");
		strcpy_s(Room[5], "1000000000000010000");
		strcpy_s(Room[6], "1000000000000010000");
		strcpy_s(Room[7], "1111111111121110000");
		strcpy_s(Room[8], "0000000001000100000");
		strcpy_s(Room[9], "1111111111000111111");
		strcpy_s(Room[10], "1000000000000000001");
		strcpy_s(Room[11], "1000000000000000001");
		strcpy_s(Room[12], "1000000000000000001");
		strcpy_s(Room[13], "1111111111111111111");
		strcpy_s(Room[14], "0000000000000000000");
		strcpy_s(Room[15], "0000000000000000000");
		strcpy_s(Room[16], "0000000000000000000");
		strcpy_s(Room[17], "0000000000000000000");
		strcpy_s(Room[18], "0000000000000000000");
		strcpy_s(Room[19], "0000000000000000000");

		break;

		
	case 2:
		player->pos.x = 1;
		player->pos.y = 1;
		pos->x = 15;
		pos->y = 9;
		strcpy_s(Room[0], "1111111111111111111");
		strcpy_s(Room[1], "1000000100000000301");
		strcpy_s(Room[2], "1000000100000000001");
		strcpy_s(Room[3], "1000000100000000001");
		strcpy_s(Room[4], "1000000111110111111");
		strcpy_s(Room[5], "1000000000000000001");
		strcpy_s(Room[6], "1000000111111111121");
		strcpy_s(Room[7], "1000000100000000001");
		strcpy_s(Room[8], "1000000100000000001");
		strcpy_s(Room[9], "1000000100000000001");
		strcpy_s(Room[10], "1111111111111111111");
		strcpy_s(Room[11], "0000000000000000000");
		strcpy_s(Room[12], "0000000000000000000");
		strcpy_s(Room[13], "0000000000000000000");
		strcpy_s(Room[14], "0000000000000000000");
		strcpy_s(Room[15], "0000000000000000000");
		strcpy_s(Room[16], "0000000000000000000");
		strcpy_s(Room[17], "0000000000000000000");
		strcpy_s(Room[18], "0000000000000000000");
		strcpy_s(Room[19], "0000000000000000000");
		break;
	case 3:
		player->pos.x = 1;
		player->pos.y = 1;
		pos->x = 15;
		pos->y = 9;
		strcpy_s(Room[0], "0000000000000000000");
		strcpy_s(Room[1], "0000000000000000000");
		strcpy_s(Room[2], "0000000000000000000");
		strcpy_s(Room[3], "0000000000000000000");
		strcpy_s(Room[4], "0000000000000000000");
		strcpy_s(Room[5], "0000000000000000000");
		strcpy_s(Room[6], "0000000000000000000");
		strcpy_s(Room[7], "0000000000000000000");
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
		break;
	case 4:
		break;
	case 5:
		break;
	case 6:
		break;
	default:
		break;
	}
	
}
void UpdateRoom(char Room[HEIGHT][WEIGHT], PPLAYER player, PPOS pos)
{
	for (int i = 0; i < HEIGHT; i++)
	{
		for (int j = 0; j < WEIGHT; j++)
		{
			if (player->pos.x == j && player->pos.y == i)
			{
				cout << "◆";
			}
			else if (pos->x == j && pos->y == i)
			{
				cout << "◈";
			}
			else if(Room[i][j] == '0')
			{
				cout << "  ";
			}
			else if (Room[i][j] == '1')
			{
				cout << "■";
			}
			else if (Room[i][j] == '2')
			{
				cout << "▤";
			}
			else if (Room[i][j] == '3')
			{
				cout << "β";
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
		if (Room[player->pos.y - 1][player->pos.x] == '0')
		{
			player->pos.y = player->pos.y - 1;
		}
	}
}
void DownMove(char Room[HEIGHT][WEIGHT], PPLAYER player)
{
	if (player->pos.y >= 0)
	{
		if (Room[player->pos.y + 1][player->pos.x] == '0')
		{
			player->pos.y = player->pos.y + 1;
		}
	}
}
void RightMove(char Room[HEIGHT][WEIGHT], PPLAYER player)
{
	if (player->pos.x >= 0)
	{
		if (Room[player->pos.y ][player->pos.x+1] == '0')
		{
			player->pos.x = player->pos.x + 1;
		}
	}
}
void LeftMove(char Room[HEIGHT][WEIGHT], PPLAYER player)
{
	if (player->pos.x >= 0)
	{
		if (Room[player->pos.y][player->pos.x - 1] == '0')
		{
			player->pos.x = player->pos.x - 1;
		}
	}
}
void CheckInteraction(char Room[HEIGHT][WEIGHT], PPLAYER player)
{
	
}
void GetItem()
{

}