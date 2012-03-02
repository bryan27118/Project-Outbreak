#ifndef INVENTORY_H
#define INVENTORY_H

class Item
{
	public:
		Item();
		void setItemX(int x2);
		void setItemY(int y2);
		void setItemId(unsigned short int x);
		unsigned short int getItemId();
		int getItemX();
		int getItemY();
	private:
		unsigned short int itemId;
		int x,y;
};

class Inventory
{
	public:
		Inventory();
		void setDisplayState(bool x);
		void spawnItem(Item item[],unsigned short int itemId,int x, int y);
		bool getDisplayState();
		void renderInventory();
		void setItems(unsigned int x);
		unsigned int getItems();
		void toggleDisplayState();

	private:
		bool displayed;
		unsigned int items;
};


#endif