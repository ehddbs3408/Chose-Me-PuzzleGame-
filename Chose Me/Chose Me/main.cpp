#include "head.h"
#include "Room.h"

char strRoom[HEIGHT][WEIGHT];
PLAYER player;

int main(void)
{
	player.pos.x = 1;
	player.pos.y = 1;
	GameSetting();
	SetRoom(strRoom,&player);
	char inputMovementKey;
	while (true)
	{
		gotoxy(0, 0);
		UpdateRoom(strRoom,&player);
		Move(strRoom,&player);
		inputMovementKey = _getch();
	}
	
}