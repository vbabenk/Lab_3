#ifndef circle_h
#define circle_h

#include "geometrical_figure.h"

class circle:public geometrical_figure
{
private:
	double radius;
public:
	circle(const string, const double, const coordinates, const double);
	circle();
	~circle();
	void show() const;
};

#endif
