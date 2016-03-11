#ifndef _Header_
#define _Header_

template <class T> class Point {
public:
	T x;
	T y;
	bool IsZero(){
		return (x == 0 && y == 0);
	};
	void SetZero(){
		x = 0;
		y = 0;
	};
	void Negate(){
		x *= -1;
		y *= -1;
	}
	Point operator-(const Point& other_point){
		Point tmp;
		tmp.x = x - other_point.x;
		tmp.y = y - other_point.y;
		return tmp;
	};
	Point operator+(const Point& other_point){
		Point tmp;
		tmp.x = x + other_point.x;
		tmp.y = y + other_point.y;
		return tmp;
	};
	void operator-=(const Point& other_point){

		x = x - other_point.x;
		y = y - other_point.y;

	};
	void operator+=(const Point& other_point){

		x = x + other_point.x;
		y = y + other_point.y;

	};
	bool operator==(const Point& other_point){
		return(x == other_point.x && y == other_point.y);
	};
	bool operator!=(const Point& other_point){
		return(x != other_point.x || y != other_point.y);
	}
	;
};

#endif