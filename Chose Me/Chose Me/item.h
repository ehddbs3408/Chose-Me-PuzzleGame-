#pragma once
#include <iostream>
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