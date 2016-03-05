#include <iostream>

using namespace std;

class Point {
public:
	float x;
	float y;
	bool IsZero();
	void SetZero();
	void Negate();
	Point operator-(const Point&);
	Point operator+(const Point&);
	void operator-=(const Point&);
	void operator+=(const Point&);
	bool operator==(const Point&);
	bool operator!=(const Point&);
};

bool Point::IsZero(){
	return (x == 0 && y == 0);
}

void Point::SetZero(){
	x = 0;
	y = 0;
}

void Point::Negate(){
	x *= -1;
	y *= -1;
}

Point Point::operator-(const Point& other_point){
	Point tmp;
	tmp.x = x - other_point.x;
	tmp.y = y - other_point.y;
	return tmp;
}

Point Point::operator+(const Point& other_point){
	Point tmp;
	tmp.x = x + other_point.x;
	tmp.y = y + other_point.y;
	return tmp;
}

void Point::operator-=(const Point& other_point){
	
	x = x - other_point.x;
	y = y - other_point.y;
	
}

void Point::operator+=(const Point& other_point){
	
	x = x + other_point.x;
	y = y + other_point.y;
	
}

bool Point::operator==(const Point& other_point){
	return(x == other_point.x && y == other_point.y);
}
bool Point::operator!=(const Point& other_point){
	return(x != other_point.x || y != other_point.y);
}

int main(){
	Point a,b,c;
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

	getchar();
	return 0;
}