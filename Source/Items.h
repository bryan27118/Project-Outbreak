#ifndef ITEMS_H
#define ITEMS_H
#include <string>

class Items
{
	public:
		Items();
		void spawnItem(int x, int y,unsigned short int weapon,unsigned short int food,unsigned short int craft);
	private:
		

};

class Item
{
	public:
		Item(unsigned short int weapon,unsigned short int food,unsigned short int craft,int x2, int y2);
		unsigned short int getWeaponType();
		unsigned short int getFoodType();
		unsigned short int getCraftingType();
	private:
		unsigned short int weaponType;
		unsigned short int foodType;
		unsigned short int craftingType;
		int x,y;
};



#endif