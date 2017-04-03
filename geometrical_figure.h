#ifndef geometrical_figure_h
#define geometrical_figure_h

#include <string>
#include <iostream>
using namespace std;

struct coordinates
{
	double x;
	double y;
};

class geometrical_figure
{
protected:
	string type;
	double area;
	coordinates center;
public:
	geometrical_figure(const string, const double, const coordinates);
	geometrical_figure();	
	virtual ~geometrical_figure();
	virtual void show() const;
};

#endif