#include <iostream>
#include "Header.h"

using namespace std;


int main(){
	Point<int> a,b,c;
	a.x = 10;
	a.y = 7;
	b.x = 5;
	b.y = 8;

	c = a + b;
	cout << c.x <<" "<< c.y<< endl;

	c = a - b;
	cout << c.x << " " << c.y << endl;
	
	b += a;
	cout << b.x << " " << b.y << endl;
	a -= b;
	cout << a.x << " " << a.y << endl;

	a.SetZero();

	getchar();
	return 0;
}