#include "circle.h"

circle::circle(const string cur_type, const double cur_area, coordinates cur_center, double cur_rad):geometrical_figure(cur_type, cur_area, cur_center),
radius(cur_rad)
{ 
}

circle::circle()
{
}


circle::~circle()
{
}

void circle::show() const
{
	cout << "Area of circle: " << area << endl
		<< "Coordinates of center of circle: (" << center.x << "; " << center.y << ")" << endl;
}
