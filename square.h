#ifndef square_h
#define square_h

#include "geometrical_figure.h"

class square:public geometrical_figure
{
private:
	double length;
public:
	square(const string, const double, const coordinates, const double);
	square();
	~square();
	void show() const;
};

#endif 
