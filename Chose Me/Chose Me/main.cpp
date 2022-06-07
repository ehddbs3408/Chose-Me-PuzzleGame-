#include "head.h"
#include "Room.h"
#include "intro.h"

char strRoom[HEIGHT][WEIGHT];
PLAYER player;
Position endPos;

int main(void)
{
	IntroEvent();


	int stage = 1;
	player.pos.x = 1;
	player.pos.y = 1;
	SetRoom(strRoom,&player,&endPos, stage);
	char inputMovementKey;

	while (true)
	{
		gotoxy(0, 0);
		UpdateRoom(strRoom,&player,&endPos);
		GameSetting();
		Move(strRoom,&player);
		inputMovementKey = _getch();

		if (ExitRoom(&player, &endPos))
		{
			stage++;
			SetRoom(strRoom, &player, &endPos, stage);
		}

		if (inputMovementKey == 'E' || inputMovementKey == 'e')
		{
			CheckInteraction(strRoom,&player);
		}
	}
	
}