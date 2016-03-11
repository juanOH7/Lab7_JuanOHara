#pragma once
#include <string>
#include <iostream>
using std::string;
using std::ostream;
using std::istream;

class Rc
{
	int num, den;
public:
//	Rc(double, double);
	Rc(int=0, int=0);
	string toString() const;
	//const Rc& operator=(const Rc&);
	//const Rc operator-() const;
	//friend ostream& operator<<(ostream&, const Rc&);
	//friend istream& operator>>(istream&, Rc&);
};

//const Rc operator+(const Rc&, const Rc&);
//const Rc operator-(const Rc&, const Rc&);
//const Rc operator/(const Rc&, const Rc&);
//const Rc operator*(const Rc&, const Rc&);
