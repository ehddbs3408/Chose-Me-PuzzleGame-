#include "head.h"
#include "Room.h"
#include "intro.h"

char strRoom[HEIGHT][WEIGHT];
PLAYER player;

int main(void)
{
	system(" mode  con cols=100 lines=35");

	CursorView();

	SetRoomData();

	IntroEvent();


	int stage = 1;
	player.pos.x = 1;
	player.pos.y = 1;
	SetRoom(strRoom,&player, stage);
	char inputMovementKey;

	while (true)
	{
		gotoxy(0, 0);
		if(stage>6)
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
				cout << "││ " << "그럼 다음 스테이지로 넘어ㄱ...." << endl;
				cout << "└┘" << endl;
				Sleep(500);
				system("cls");
				for (int i = 0; i < 30; i++)
					cout << "▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒" << endl;
				Sleep(500);
				system("cls");
				Sleep(100);
				system("cls");
				for (int i = 0; i < 30; i++)
					cout << "▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒" << endl;
				Sleep(500);
				system("cls");
				Sleep(100);
				system("cls");
				for (int i = 0; i < 30; i++)
					cout << "▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒" << endl;
				Sleep(100);
			}
			system("cls");
			SetRoom(strRoom, &player, stage);
		}

		UpdateRoom(strRoom,&player);
		if (stage < 6)
		{
			GameSetting();
		}
		
		Move(strRoom,&player);

		if (stage == 8)
		{
			system("cls");
			break;
		}

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
				cout << "││ " << "그럼 다음 스테이지로 넘어ㄱ...." << endl;
				cout << "└┘" << endl;
				Sleep(500);
				system("cls");
				for (int i = 0; i < 30; i++)
					cout << "▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒" << endl;
				Sleep(500);
				system("cls");
				Sleep(100);
				system("cls");
				for (int i = 0; i < 30; i++)
					cout << "▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒" << endl;
				Sleep(500);
				system("cls");
				Sleep(100);
				system("cls");
				for (int i = 0; i < 30; i++)
					cout << "▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒" << endl;
				Sleep(100);
			}
			system("cls");
			SetRoom(strRoom, &player, stage);
		}


		if (inputMovementKey == 'E' || inputMovementKey == 'e')
		{
			CheckInteraction(strRoom,&player,stage);
		}
		if (inputMovementKey == 'Q' || inputMovementKey == 'q')
		{
			system("cls");

			if (stage < 6)
			{
				cout << "┌┐" << endl;
				cout << "││ 한번종료하면 처음부터 다시 시작됩니다. 종료하시겠습니까? " << endl;
				cout << "└┘" << endl;
			}
			

			cout << "1.종료 2.취소" << endl;
			int input;
			cin >> input;
			if (input == 1)
			{
				system("cls");
				if (stage < 6)
				{
					cout << "┌┐" << endl;
					cout << "││ 시스템을 종료합니다 " << endl;
					cout << "└┘" << endl;
				}
				for (int i = 3; i > 0; i--)
				{
					cout << i << ".." << endl;
					Sleep(1000);
				}
				break;
			}
			system("cls");
		}
	}
	if (stage > 7)
	{
		GameClear();
	}
	
	_getch();
}