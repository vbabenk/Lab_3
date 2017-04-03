#include "circle.h"
#include "square.h"

const double PI = 3.14159265;

void choice(geometrical_figure *arr_ptr[], int n)
{
	double area, length, radius;
	coordinates center;
	int key;
	for (int i = 0; i < n;)
	{
		cout << "Square(1) or circle(2): ";
		cin >> key;
		cout << endl;
		switch (key)
		{
		case 1:
		{
			cout << "Enter the length of the side of the square: ";
			cin >> length;
			cout << "Enter the coordinates of center: " << endl;
			cout << "x: ";
			cin >> center.x;
			cout << "y: ";
			cin >> center.y;
			area = pow(length, 2);
			arr_ptr[i] = new square("Square", area, center, length);
			i++;
			break;
		}
		case 2:
		{
			cout << "Enter the radius of the circle: ";
			cin >> radius;
			cout << "Enter the coordinates of center: " << endl;
			cout << "x: ";
			cin >> center.x;
			cout << "y: ";
			cin >> center.y;
			area = PI*pow(radius, 2);
			arr_ptr[i] = new circle("Circle", area, center, radius);
			i++;
			break;
		}
		default:
		{
			cout << "Try again" << endl;
			break;
		}
		}
		cout << endl;
	}
	cout << endl;
}

void main()
{
	const int n = 2;
	geometrical_figure *arr_ptr[n];
	choice(arr_ptr, n);
	for (int i = 0; i < n; i++)
		arr_ptr[i]->show();
}