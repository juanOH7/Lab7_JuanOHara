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
	explicit Rc(int=0, int=0);
	string toString() const;
	const Rc& operator=(const Rc&);
	friend ostream& operator<<(ostream&, const Rc&);
	Rc operator+(const Rc&);
	Rc operator-(const Rc&);
	Rc operator/(const Rc&);
	Rc operator*(const Rc&);
};

