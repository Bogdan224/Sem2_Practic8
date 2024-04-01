#include "Display.h"
Display::Display(){ 
	width = 0;
	height = 0;
	diagonal = 0;
	colors = 0;
}
Display::Display(float diagonal, int colors){
	width = 0;
	height = 0;
	setDiagonal(diagonal);
	setColors(colors);
}
Display::Display(float width, float height, int colors){
	setWidth(width);
	setHeight(height);
	this->diagonal = 0;
	setColors(colors);
}
Display::Display(float width, float height, float diagonal, int colors){ 
	setWidth(width);
	setHeight(height);
	setDiagonal(diagonal);
	setColors(colors);
}
float Display::getWidth() const{
	return width;
}
float Display::getHeight() const{
	return height;
}
float Display::getDiagonal() const{ 
	return diagonal;
}
int Display::getColors() const{
	return colors;
}
float Display::FindDiagonal(float width, float height){
	diagonal = sqrt(pow(width, 2) + pow(height, 2));
	return diagonal;
}
void Display::setWidth(float width){ 
	if (width < 0 || width > FLT_MAX) {
		width = 0;
	}
	this->width = width;
}
void Display::setHeight(float height){ 
	if (height < 0 || height > FLT_MAX) {
		height = 0;
	}
	this->height = height;
}
void Display::setDiagonal(float diagonal){
	if (diagonal < 0 || diagonal > FLT_MAX) {
		return;
	}
	this->diagonal = diagonal;
}
void Display::setColors(int colors){
	if (colors < 0 || colors > FLT_MAX) {
		return;
	}
	this->colors = colors;
}
