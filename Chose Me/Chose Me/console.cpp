#include "head.h"

void gotoxy(int x, int y)
{
	COORD posXY = { x,y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), posXY);

}

void GameSetting()
{
	cout << "이동 : ↑ ↓ ← →" << endl;
	cout << "상호작용 : E" << endl;
}

void UpLinePrompt(int count)
{
    for (int i = 0; i < count; i++) {
        //printf("%c[2K",27);
        cout << "\33[2K"; //line clear
        cout << "\x1b[A"; //up line (ESC [ A) must be support VT100 escape seq
    }
}