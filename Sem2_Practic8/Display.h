#pragma once
#include <math.h>
#include <float.h>
class Display
{
private:
	float width, height, diagonal;
	int colors;	
public:
	Display();
	Display(float diagonal, int colors = 0);
	Display(float width, float height, int colors = 0);
	Display(float width, float height, float diagonal, int colors = 0);
	float getWidth() const;
	float getHeight() const;
	float getDiagonal() const;
	int getColors() const;
	float FindDiagonal(float width, float height);
	void setWidth(float width);
	void setHeight(float height);
	void setDiagonal(float diagonal);
	void setColors(int colors);
};

