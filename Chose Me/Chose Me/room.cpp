#include "Room.h"
#include "head.h"

bool isNext = false;
RoomData room[5];

void SetRoomData()
{
	room[0].SetData(4, 1234, "동서남북");
}

bool ExitRoom(PPLAYER player)
{
	if (isNext)
	{
		isNext = false;
		cout << "┌┐" << endl;
		cout << "││ " << "ㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤ" << endl;
		cout << "└┘" << endl;
		return true;
	}
	return false;
}
void SetRoom(char Room[HEIGHT][WEIGHT], PPLAYER player,int stage)
{
	switch (stage)
	{
	case 1:
		player->pos.x = 1;
		player->pos.y = 1;

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
		strcpy_s(Room[11], "1040000000000000001");
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
		strcpy_s(Room[0], "1111111111111111111");
		strcpy_s(Room[1], "1000000100000000301");
		strcpy_s(Room[2], "1000000100000000001");
		strcpy_s(Room[3], "1000000100000000001");
		strcpy_s(Room[4], "1000000111110111111");
		strcpy_s(Room[5], "1000000000000000001");
		strcpy_s(Room[6], "1000000111111111121");
		strcpy_s(Room[7], "1000000100000000001");
		strcpy_s(Room[8], "1000000104000000001");
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
		player->pos.x = 9;
		player->pos.y = 10;
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
		strcpy_s(Room[10], "0400000000000000040");
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
		player->pos.x = 10;
		player->pos.y = 2;
		strcpy_s(Room[0], "1111111111111111111");
		strcpy_s(Room[1], "1000000000000000001");
		strcpy_s(Room[2], "1000000000000000601");
		strcpy_s(Room[3], "1000000000000000001");
		strcpy_s(Room[4], "1000000000000000001");
		strcpy_s(Room[5], "1000000000000000001");
		strcpy_s(Room[6], "1000000000000000001");
		strcpy_s(Room[7], "1000000000000000001");
		strcpy_s(Room[8], "1050000000000000001");
		strcpy_s(Room[9], "1000000000000000001");
		strcpy_s(Room[10], "1111111111211111111");
		strcpy_s(Room[11], "1000000000000000001");
		strcpy_s(Room[12], "1000000000000000001");
		strcpy_s(Room[13], "1000000000000000001");
		strcpy_s(Room[14], "1000000000000000001");
		strcpy_s(Room[15], "1000000000000000001");
		strcpy_s(Room[16], "1000000000000000001");
		strcpy_s(Room[17], "1000000000000000001");
		strcpy_s(Room[18], "1400000000000000001");
		strcpy_s(Room[19], "1111111111111111111");
		break;
	case 5:
		break;
	case 6:
		break;
	default:
		break;
	}
	
}
void UpdateRoom(char Room[HEIGHT][WEIGHT], PPLAYER player)
{
	for (int i = 0; i < HEIGHT; i++)
	{
		for (int j = 0; j < WEIGHT; j++)
		{
			if (player->pos.x == j && player->pos.y == i)
			{
				cout << "◆";
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
			else if (Room[i][j] == '4')
			{
				cout << "◈";
			}
			else if (Room[i][j] == '5')
			{
				cout << "▣";
			}
			else if (Room[i][j] == '6')
			{
				cout << "☎";
			}
			else if (Room[i][j] == '7')
			{
				cout << "◀";
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
void CheckInteraction(char Room[HEIGHT][WEIGHT], PPLAYER player,int stage)
{
	if (Room[player->pos.y - 1][player->pos.x] == '3'||
		Room[player->pos.y + 1][player->pos.x] == '3'||
		Room[player->pos.y][player->pos.x - 1] == '3'||
		Room[player->pos.y][player->pos.x + 1] == '3'
		)
	{
		GetItem(Room,player,Doorkey);
	}
	else if(Room[player->pos.y - 1][player->pos.x] == '2' ||
		Room[player->pos.y + 1][player->pos.x] == '2' ||
		Room[player->pos.y][player->pos.x - 1] == '2' ||
		Room[player->pos.y][player->pos.x + 1] == '2'
		)
	{
		GetItem(Room, player, Door);
	}
	else if (Room[player->pos.y - 1][player->pos.x] == '4' ||
		Room[player->pos.y + 1][player->pos.x] == '4' ||
		Room[player->pos.y][player->pos.x - 1] == '4' ||
		Room[player->pos.y][player->pos.x + 1] == '4'
		)
	{
		if (stage == 3)
		{
			cout << "┌┐" << endl;
			cout << "││ " << "사람을 1명 구하셨습니다.. 다음방으로 가실려면 아무키나 입력해주세요!!ㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤ" << endl;
			cout << "└┘" << endl;
			isNext = true;
		}
		else
		{
			cout << "┌┐" << endl;
			cout << "││ " << "사람을 구하셨습니다!! 다음방으로 가실려면 아무키나 입력해주세요!!ㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤ" << endl;
			cout << "└┘" << endl;
			cout << "ㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤ" << endl;
			cout << "ㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤ" << endl;
			cout << "ㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤ" << endl;
			cout << "ㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤ" << endl;
			isNext = true;
		}
	}
	else if (Room[player->pos.y - 1][player->pos.x] == '5' ||
		Room[player->pos.y + 1][player->pos.x] == '5' ||
		Room[player->pos.y][player->pos.x - 1] == '5' ||
		Room[player->pos.y][player->pos.x + 1] == '5'
		)
	{
		int input;
		cout << "┌┐" << endl;
		cout << "││ " << "비번을 입력해주세요!ㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤ" << endl;
		cout << "└┘" << endl;
		cin >> input;
		if (input == room[stage-4].GetBoxNum())
		{
			if (Room[player->pos.y - 1][player->pos.x] == '5')
				Room[player->pos.y - 1][player->pos.x] = '0';
			if (Room[player->pos.y + 1][player->pos.x] == '5')
				Room[player->pos.y + 1][player->pos.x] = '0';
			if (Room[player->pos.y][player->pos.x - 1] == '5')
				Room[player->pos.y][player->pos.x - 1] = '0';
			if (Room[player->pos.y][player->pos.x + 1] == '5')
				Room[player->pos.y][player->pos.x + 1] = '0';
			cout << "┌┐" << endl;
			cout << "││ " << "정답!ㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤ" << endl;
			cout << "└┘" << endl;
			cout << "ㅤㅤㅤㅤㅤㅤㅤ";
			Room[5][5] = '3';
		}
		else
		{
			cout << "┌┐" << endl;
			cout << "││ " << "삐비~~오답입니다.ㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤ" << endl;
			cout << "└┘" << endl;
			cout << "ㅤㅤㅤㅤㅤㅤㅤ";
		}
	}
	else if (Room[player->pos.y - 1][player->pos.x] == '6' ||
		Room[player->pos.y + 1][player->pos.x] == '6' ||
		Room[player->pos.y][player->pos.x - 1] == '6' ||
		Room[player->pos.y][player->pos.x + 1] == '6'
		)
	{
		cout << "┌┐" << endl;
		cout << "││ "; room[stage - 4].PrintHintData(); cout<< "ㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤ" << endl;
		cout << "└┘" << endl;
	}

}
void GetItem(char Room[HEIGHT][WEIGHT], PPLAYER player,int id)
{
	if (id == Doorkey)
	{
		char exstr[100] = "방문 열쇠";
		Item key;
		key.SetValue(exstr, Doorkey);
		player->haveItem = key;
		cout << "┌┐" << endl;
		cout << "││ "; key.PrintItemEx(); cout <<"를 획득하셨습니다.ㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤ" << endl;
		cout << "└┘" << endl;
		if (Room[player->pos.y - 1][player->pos.x] == '3')
			Room[player->pos.y - 1][player->pos.x] = '0';
		if (Room[player->pos.y + 1][player->pos.x] == '3')
			Room[player->pos.y + 1][player->pos.x] = '0';
		if (Room[player->pos.y][player->pos.x - 1] == '3')
			Room[player->pos.y][player->pos.x - 1] = '0';
		if (Room[player->pos.y][player->pos.x + 1] == '3')
			Room[player->pos.y][player->pos.x + 1] = '0';
	}
	else if (id == Door)
	{
		if (player->haveItem.GetItemType() == Doorkey)
		{
			cout << "┌┐" << endl;
			cout << "││ "; player->haveItem.PrintItemEx(); cout <<"를 사용하셨습니다.ㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤ" << endl;
			cout << "└┘" << endl;
			if (Room[player->pos.y - 1][player->pos.x] == '2')
				Room[player->pos.y - 1][player->pos.x] = '0';
			if (Room[player->pos.y + 1][player->pos.x] == '2')
				Room[player->pos.y + 1][player->pos.x] = '0';
			if (Room[player->pos.y][player->pos.x - 1] == '2')
				Room[player->pos.y][player->pos.x - 1] = '0';
			if (Room[player->pos.y][player->pos.x + 1] == '2')
				Room[player->pos.y][player->pos.x + 1] = '0';
			char exstr[100] = "";
			player->haveItem.SetValue(exstr, None);
		}
		else
		{
			cout << "┌┐" << endl;
			cout << "││ " << "문이 닫혀있습니다.ㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤ" << endl;
			cout << "└┘" << endl;
		}
	}

	
}