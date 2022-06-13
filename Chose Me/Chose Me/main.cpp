#include "head.h"
#include "Room.h"
#include "intro.h"

char strRoom[HEIGHT][WEIGHT];
PLAYER player;

int main(void)
{
	SetRoomData();

	IntroEvent();


	int stage = 3;
	player.pos.x = 1;
	player.pos.y = 1;
	SetRoom(strRoom,&player, stage);
	char inputMovementKey;

	while (true)
	{
		gotoxy(0, 0);
		UpdateRoom(strRoom,&player);
		GameSetting();
		Move(strRoom,&player);
		inputMovementKey = _getch();

		if (ExitRoom(&player))
		{
			stage++;
			if (stage == 4)
			{
				system("cls");
				for (int i = 0; i < 10; i++)
				{
					cout << "▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒" << endl;
					cout << "▒▒▒▒▓▒▒▓▒▒▒▒▒▒▒▒▓▒▒▓▒▒▒▒▒▒▒▒▓▒▒▓▒▒▒▒▒▒▒▒▓▒▒▓▒▒▒▒▒▒▒▒▓▒▒▓▒▒▒▒" << endl;
					cout << "▒▒▒▒▓▒▒▓▒▒▒▒▒▒▒▒▓▒▒▓▒▒▒▒▒▒▒▒▓▒▒▓▒▒▒▒▒▒▒▒▓▒▒▓▒▒▒▒▒▒▒▒▓▒▒▓▒▒▒▒" << endl;
					cout << "▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒" << endl;
					cout << "▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒" << endl;
					cout << "▒▒▓▓▓▓▓▓▓▓▒▒▒▒▓▓▓▓▓▓▓▓▒▒▒▒▓▓▓▓▓▓▓▓▒▒▒▒▓▓▓▓▓▓▓▓▒▒▒▒▓▓▓▓▓▓▓▓▒▒" << endl;
					cout << "▒▓▒▒▒▒▒▒▒▒▓▒▒▓▒▒▒▒▒▒▒▒▓▒▒▓▒▒▒▒▒▒▒▒▓▒▒▓▒▒▒▒▒▒▒▒▓▒▒▓▒▒▒▒▒▒▒▒▓▒" << endl;
				}
				Sleep(200);
				system("cls");
			}
			SetRoom(strRoom, &player, stage);
		}

		if (inputMovementKey == 'E' || inputMovementKey == 'e')
		{
			CheckInteraction(strRoom,&player,stage);
		}
	}
	
}