#pragma once
#include "item.h"
const int HEIGHT = 20;
const int WEIGHT = 20;

typedef struct Position
{
	int x;
	int y;
}POS, * PPOS;

typedef struct _player
{
	Position pos;
	int stage = 0;
	Item haveItem;


}PLAYER, * PPLAYER;
bool ExitRoom(PPLAYER player);
void SetRoom(char Room[HEIGHT][WEIGHT], PPLAYER player, int stage);
void UpdateRoom(char Room[HEIGHT][WEIGHT], PPLAYER player);
void Move(char Maze[HEIGHT][WEIGHT], PPLAYER playerPos);
void UpMove(char Room[HEIGHT][WEIGHT], PPLAYER player);
void DownMove(char Room[HEIGHT][WEIGHT], PPLAYER player);
void RightMove(char Room[HEIGHT][WEIGHT], PPLAYER player);
void LeftMove(char Room[HEIGHT][WEIGHT], PPLAYER player);
void CheckInteraction(char Room[HEIGHT][WEIGHT], PPLAYER player, int stage);
void GetItem(char Room[HEIGHT][WEIGHT], PPLAYER player, int id);