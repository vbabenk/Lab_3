#include "geometrical_figure.h"

geometrical_figure::geometrical_figure(const string cur_type, const double cur_area, const coordinates cur_center): type(cur_type), area(cur_area), center(cur_center)
{
}

geometrical_figure::geometrical_figure()
{
}


geometrical_figure::~geometrical_figure()
{
}

void geometrical_figure::show() const
{
	cout << "Area of figure: " << area << endl
		<< "Coordinates of center of figure: (" << center.x << "; " << center.y << ")" << endl;
}
