#include<iostream>
#include"msoftcon.h"
using namespace std;

class shape{
	protected:
		int xCo, yCo;
		color fillcolor;
		fstyle fillstyle;
	public:
		shape() : xCo(0), yCo(0), fillcolor(cWHITE), fillstyle(SOLID_FILL) {}
		shape(int x, int y, color c, fstyle s) : xCo(x),yCo(y),fillcolor(c), fillstyles() {}
		void draw() const {
			set_color(fillcolor);
			set_fill_style(fillstyle):
		}
};

class circle : public shape {
	private:
		int radius;
	public:
		circle() : shape() {}
		circle(int x, int y, int r, color c,fstyle s) : shape(x,y,c,s),radius(r) {}
		void draw() const {
			shape::draw();
			draw_circle(xCo, yCo, radius);
		}
};

class rect : public shape {
	private:
		int wdt;
		int hgt;
	public:
		rect() : shape(), wdt(0), hgt(0) {}
		rect(int x, int y, int h, int w, color c, fstyle s) : shape(x,y,c,s),wdt(w),hgt(h){}
		void draw()const {
			shape::draw();
			draw_rectangle(xCo,yCo,xCo+wdt,yCo+hgt);
			set_color(cWHITE);
			draw_line(xCo,yCo,xCo+wdt,yCo+hgt);
		}
};

class tangle: public shape {
	private:
		int height;
	public:
		tangle() : shape(), height(0) {}
		tangle(intx,inty,int h, color c, fstyle s) : shape(x,y,c,s),height(h) {}
		void draw() const {
			shape::draw();
			draw_pyramid(xCo,yCo,height);
		}
		
};

int main(int argc, char** argv) {

	init_graphics();

	circle cir(40, 12, 5, cBLUE, X_FILL);
	rect rec(12, 7, 10, 15, cRED, SOLID_FILL);
	tangle tri(60, 7, 11, cGREEN, MEDIUM_FILL);

	cir.draw();
	rec.draw();
	tri.draw();
	set_cursor_pos(1, 25);

	return 0;
}


