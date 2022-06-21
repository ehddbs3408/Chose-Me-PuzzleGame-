#include "head.h"
#include "Room.h"
#include "intro.h"

char strRoom[HEIGHT][WEIGHT];
PLAYER player;

int main(void)
{
	system(" mode  con cols=100 lines=35");

	SetRoomData();

	IntroEvent();


	int stage = 5;
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
			system("cls");
			stage++;
			if (stage == 4)
			{
				system("cls");
				for (int i = 0; i < 10; i++)
				{
					cout << "▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒" << endl;
					cout << "▒▒▒▒▓▒▒▓▒▒▒▒▒▒▒▒▓▒▒▓▒▒▒▒▒▒▒▒▓▒▒▓▒▒▒▒▒▒▒▒▓▒▒▓▒▒▒▒▒▒▒▒▓▒▒▓▒▒▒▒▒▒▒▒▓▒▒▓▒▒▒▒▒▒▒▒▓▒▒▓▒▒▒▒▒▒▒▒▓▒▒▓▒▒▒▒" << endl;
					cout << "▒▒▒▒▓▒▒▓▒▒▒▒▒▒▒▒▓▒▒▓▒▒▒▒▒▒▒▒▓▒▒▓▒▒▒▒▒▒▒▒▓▒▒▓▒▒▒▒▒▒▒▒▓▒▒▓▒▒▒▒▒▒▒▒▓▒▒▓▒▒▒▒▒▒▒▒▓▒▒▓▒▒▒▒▒▒▒▒▓▒▒▓▒▒▒▒" << endl;
					cout << "▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒" << endl;
					cout << "▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒" << endl;
					cout << "▒▒▓▓▓▓▓▓▓▓▒▒▒▒▓▓▓▓▓▓▓▓▒▒▒▒▓▓▓▓▓▓▓▓▒▒▒▒▓▓▓▓▓▓▓▓▒▒▒▒▓▓▓▓▓▓▓▓▒▒▒▒▓▓▓▓▓▓▓▓▒▒▒▒▓▓▓▓▓▓▓▓▒▒▒▒▓▓▓▓▓▓▓▓▒▒" << endl;
					cout << "▒▓▒▒▒▒▒▒▒▒▓▒▒▓▒▒▒▒▒▒▒▒▓▒▒▓▒▒▒▒▒▒▒▒▓▒▒▓▒▒▒▒▒▒▒▒▓▒▒▓▒▒▒▒▒▒▒▒▓▒▒▓▒▒▒▒▒▒▒▒▓▒▒▓▒▒▒▒▒▒▒▒▓▒▒▓▒▒▒▒▒▒▒▒▓▒" << endl;
				}
				Sleep(200);
				system("cls");
			}
			else if (stage == 6)
			{
				cout << "잔만 나도 살려줘.. 제발 죽고 싶지않어.. 제발...제발..." << endl;
				Sleep(3000);
				cout << "┌┐" << endl;
				cout << "││ " << "... 분명 말은 하지말라고 말씀드렸는데.. 스스로 기회를 버리시는군요" << endl;
				cout << "└┘" << endl;
				Sleep(3000);
				cout << "기회?.. 처음부터 그딴건 없었잖어 이 미치ㄴ..ㅅ ㅐ" << endl;
				Sleep(500);
				cout << "┌┐" << endl;
				cout << "││ " << "...죄송합니다. 게임을 플레이하시는데 불편하지 않게 최대한 노력하였는데 " << endl;
				cout << "└┘" << endl;
				Sleep(2500);
				cout << "┌┐" << endl;
				cout << "││ " << "방금 빠르게! 조치를 취했으니 플레이엔 지장이 없으실겁니다.!" << endl;
				cout << "└┘" << endl;
				Sleep(2500);
				cout << "┌┐" << endl;
				cout << "││ " << "그럼 다음 스테이지로 넘어가죠!!" << endl;
				cout << "└┘" << endl;
				Sleep(2500);
			}
			system("cls");
			SetRoom(strRoom, &player, stage);
		}

		if (inputMovementKey == 'E' || inputMovementKey == 'e')
		{
			CheckInteraction(strRoom,&player,stage);
		}
	}
	
}