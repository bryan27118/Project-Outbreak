#ifndef GRID_H
#define GRID_H
#include "Point.h"
#include "Screen.h"

class Grid
{
	public:
		Grid(Point size);
			
		//Basic Crap Down here
		int getX();
		void setX(int tempX);
		int getY();
		void setY(int tempY);

		//Real Shit
		void renderGrid();

		
	private:
		
		
		int x;
		int y;
		int grid[1024/16][600/16];
};

#endif