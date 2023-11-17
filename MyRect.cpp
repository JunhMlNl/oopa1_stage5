#include "MyRect.h"
#include "Graphics.h"
MyRect::MyRect(int x1, int y1, int x2, int y2, Graphics* g):MyShape(x1, y1, x2, y2, g){
}
void MyRect::draw() {
	g_->drawRect(x_, y_, width_, height_);
}