#include "head.h"

void gotoxy(int x, int y)
{
	COORD posXY = { x,y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), posXY);

}

void GameSetting()
{
	cout << "이동 : ↑ ↓ ← →" << endl;
	cout << "상호작용 : E";
}