#include "Items.h"
#include <string>

//////ITEMS//////////////
Items::Items()
{

}

void Items::spawnItem(int x, int y,unsigned short int weapon,unsigned short int food,unsigned short int craft)
{
	Item item(weapon,food,craft,x,y);
}

///////ITEM//////////
Item::Item(unsigned short int weapon,unsigned short int food,unsigned short int craft,int x2, int y2)
{
	weaponType = weapon;
	foodType = food;
	craftingType = craft;
	x = x2;
	y = y2;
}

unsigned short int Item::getWeaponType()
{
	return weaponType;
}
unsigned short int Item::getFoodType()
{
	return weaponType;
}
unsigned short int Item::getCraftingType()
{
	return weaponType;
}