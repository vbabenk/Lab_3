#include "square.h"

square::square(const string cur_type, const double cur_area, const coordinates cur_center, const double cur_len):geometrical_figure(cur_type, cur_area, cur_center),
length(cur_len)
{	
}

square::square()
{
}

square::~square()
{
}

void square::show() const
{
	cout << "Area of square: " << area << endl
		<< "Coordinates of center of square: (" << center.x << "; " << center.y << ")" << endl;
}