#include "Inventory.h"
#include "SDL_opengl.h"
#include <iostream>

Inventory::Inventory()
{
	displayed = false;
	items = 0;
}
void Inventory::toggleDisplayState()
{
	if(displayed)
	{
		displayed = false;
	}
	else if(!displayed)
	{
		displayed = true;
	}
}

void Inventory::setItems(unsigned int x)
{
	items = x;
}
unsigned int Inventory::getItems()
{
	return items;
}

bool Inventory::getDisplayState()
{
	return displayed;
}

void Inventory::setDisplayState(bool x)
{
	displayed = x;
}

void Inventory::spawnItem(Item item[],unsigned short int itemId,int x, int y)
{
	item[items].setItemId(itemId);
	item[items].setItemX(x);
	item[items].setItemY(y);
	items++;
	std::cout<<items<<std::endl;
}

////Items////
Item::Item()
{
	itemId = 0;
}

void Item::setItemX(int x2)
{
	x = x2;
}

void Item::setItemY(int y2)
{
	y = y2;
}

void Item::setItemId(unsigned short int x)
{
	itemId = x;
}

int Item::getItemX()
{
	return x;
}

int Item::getItemY()
{
	return y;
}

unsigned short int Item::getItemId()
{
	return itemId;
}
