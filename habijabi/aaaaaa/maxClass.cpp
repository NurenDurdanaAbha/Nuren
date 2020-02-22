#include <iostream>

using namespace std;

class X;
class Y;
class Z;

class X
{
	int a;

public:
	X(){}

	X(int m)
	{
		a = m;
	}

	friend void max(X, Y, Z);
};

class Y
{
	int b;

public:
	Y(){}

	Y(int n)
	{
		b = n;
	}

	friend void max(X, Y, Z);
};

class Z
{
	int c;

public:
	Z(){}
	Z(int o)
	{
		c = o;
	}

	friend void max(X, Y, Z);
};

void max(X d, Y e, Z f)
{
	if(d.a > e.b && d.a > f.c)
		cout << "class X is max" << endl;

	else if(e.b > d.a && e.b > f.c)
		cout << "class Y is max" << endl;

	else
		cout << "class Z is max" << endl;
}

int main()
{
	X obj_x(38);
	Y obj_y(43);
	Z obj_z(89);

	max(obj_x, obj_y, obj_z);

	return 0;
}
