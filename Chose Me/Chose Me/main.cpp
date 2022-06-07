#include "head.h"
#include "Room.h"

char strRoom[HEIGHT][WEIGHT];
PLAYER player;
Position endPos;

int main(void)
{
	int stage = 1;
	player.pos.x = 1;
	player.pos.y = 1;
	GameSetting();
	SetRoom(strRoom,&player,&endPos, stage);
	char inputMovementKey;
	while (true)
	{
		gotoxy(0, 0);
		UpdateRoom(strRoom,&player,&endPos);
		Move(strRoom,&player);
		inputMovementKey = _getch();

		if (ExitRoom(&player, &endPos))
		{
			stage++;
			SetRoom(strRoom, &player, &endPos, stage);
		}
	}
	
}