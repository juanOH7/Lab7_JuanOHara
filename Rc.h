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
	Rc(int=0, int=0);
	string toString() const;
	friend ostream& operator<<(ostream&, const Rc&);
	friend const Rc operator+(const Rc&, const Rc&);
	friend const Rc operator-(const Rc&, const Rc&);
	friend const Rc operator/(const Rc&, const Rc&);
	friend const Rc operator*(const Rc&, const Rc&);
};

