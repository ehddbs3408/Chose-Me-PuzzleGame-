#pragma once
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

}PLAYER, * PPLAYER;

void SetRoom(char Maze[HEIGHT][WEIGHT],PPLAYER playerPos);
void UpdateRoom(char Maze[HEIGHT][WEIGHT], PPLAYER playerPos);
void Move(char Maze[HEIGHT][WEIGHT], PPLAYER playerPos);
void UpMove(char Room[HEIGHT][WEIGHT], PPLAYER player);
void DownMove(char Room[HEIGHT][WEIGHT], PPLAYER player);
void RightMove(char Room[HEIGHT][WEIGHT], PPLAYER player);
void LeftMove(char Room[HEIGHT][WEIGHT], PPLAYER player);
void GetItem();