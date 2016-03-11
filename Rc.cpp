#include "Rc.h"
#include <string>
#include <sstream>
#include <iostream>
using std::cout;
using std::string;
using std::stringstream;
using std::ostream;
using std::istream;
using std::showpos;
using std::noshowpos;

void numeroSimp(int*, int, int);

Rc::Rc(int num, int den)
{
	cout << "Construct In";
	int arreglo[2];
	numeroSimp(arreglo, num, den);
	this -> num = arreglo[0];
	this -> den = arreglo[1];
}

void numeroSimp(int* arreglo, const int num, const int den)
{
	int temNum = num;
	int temDen = den;
	int LCM, numCompPrim;
	while(true)
	{
		if ( (temNum < temDen) && (temNum != 1) && (temDen != 1))
		{
			numCompPrim = temNum;
		}else if ( (temDen < temNum) && (temNum != 1) && (temDen != 1) )
		{
			numCompPrim = temDen;
		}else if((temNum == 1) || (temDen == 1))
		{
			break;
		}
		if ( (temDen%numCompPrim==0) && (temNum%numCompPrim==0) )
		{
			LCM = numCompPrim;
		}else if ( (temDen%2==0) && ((temNum%2==0)) )
		{
			LCM = 2;
		}else if ((temDen%3==0) && ((temNum%3==0)))
		{
			LCM = 3;
		}else if ((temDen%5==0) && ((temNum%5==0)))
		{
			LCM = 5;
		}else if ((temDen%7==0) && ((temNum%7==0)))
		{
			LCM = 7;
		}else
		{
			break;
		}
		temDen /= LCM;
		temNum /= LCM;
	}
	arreglo[0] = temNum;
	arreglo[1] = temDen;
}
/*
const Rc& Rc::operator=(const Rc& r){
	num = r.num;
	den = r.den;
	return *this;
}*/

string Rc::toString() const{
	stringstream ss;
	ss << num << " / " << den;
	return ss.str();
}
/*const Rc Rc::operator-() const{
   return Rc(-num, -den);
}

const Rc operator+(const Rc& lhs, const Rc& rhs){
	Rc retVal = lhs;
	retVal += rhs;
	return retVal;
}
const Rc operator-(const Rc& lhs, const Rc& rhs){
	Rc retVal = lhs;
	retVal -= rhs;
	return retVal;
}
*/
/*
ostream& operator<<(ostream& output, const Rc& Num){
	if (Num.real == 0){
		if (Num.imag == 0){
			output << 0.0;
		}else{
			if (Num.imag == 1)
				output << "i";
			else if (Num.imag == -1)
				output << "-i";
			else
				output << Num.imag << "i";
		}
	}else{
		if (Num.imag == 0)
			output << Num.real;
		else
			if (Num.imag == 1)
				output << Num.real << "i";
			else if (Num.imag == -1)
				output << Num.real << "-i";
			else	
				output << Num.real << showpos << Num.imag << "i";
	}
	output << noshowpos;
	return output;
}
*/
/*
istream& operator>>(istream& input, Rc& Num){
	input >> Num.num >> Num.den;
	return input;
}*/