#pragma once
#include <iostream>
#include <string>
enum ItemType
{
	None,
	Doorkey,
	BoxKey,
	Door,
	NumberBox,
	Hint

};
class Item
{
	int id;
	char* itemExplanation;
	int type;
public:
	void SetValue(char* ex,int type)
	{
		int len = strlen(ex) + 1;
		itemExplanation = new char[len];
		strcpy_s(itemExplanation, len, ex);
		this->type = type;
	}
	int GetItemType()
	{
		if (type == NULL)
		{
			return -1;
		}
		return type;
	}
	void PrintItemEx()
	{
		std::cout << itemExplanation;
	}
};
class RoomData
{
	int stage;
	int boxSecretNumber;
	std::string hintMassage;
public:
	void SetData(int stage, int num, std::string ex)
	{
		this->stage = stage;
		boxSecretNumber = num;
		hintMassage = ex;
	}
	int GetStageNum()
	{
		return stage;
	}
	int GetBoxNum()
	{
		return boxSecretNumber;
	}
	void PrintHintData()
	{
		std::cout << hintMassage;
	}
};