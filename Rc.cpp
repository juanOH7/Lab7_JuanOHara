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
	int arreglo[2];
	if (den == 0)
	{
		den = 1;
	}
	if (num < 0 && den < 0)
	{
		num *= -1;
		den *= -1;
	}
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

string Rc::toString() const
{
	stringstream ss;
	ss << num << " / " << den;
	return ss.str();
}

const Rc operator + (const Rc& L, const Rc& R)
{
	int temNumL = L.num;
	int temDenL = L.den;
	int temNumD = R.num;
	int temDenD = R.den;
	Rc fin;
	if (L.den == D.den)
	{
		fin = ((temNumL * temDenD) + (temNumD * temDenL) ) / temDen; 
	}else
	{
		fin = ((temNumL * temDenD) + (temNumD * temDenL) ) / (temDen * temDenL); 		
	}
	return fin;
}
const Rc operator - (const Rc& L, const Rc& R)
{
	int temNumL = L.num;
	int temDenL = L.den;
	int temNumD = R.num;
	int temDenD = R.den;
	Rc fin;
	if (L.den == D.den)
	{
		fin = ((temNumL * temDenD) - (temNumD * temDenL) ) / temDen; 
	}else
	{
		fin = ((temNumL * temDenD) - (temNumD * temDenL) ) / (temDen * temDenL); 		
	}
	return fin;
}
const Rc operator / (const Rc& L, const Rc& R)
{
	int temNumL = L.num;
	int temDenL = L.den;
	int temNumD = R.num;
	int temDenD = R.den;
	Rc fin = (temNumD * temDenL) / (temNumL * temDenD);
	return fin;
	
}
const Rc operator * (const Rc& L, const Rc& R)
{
	int temNumL = L.num;
	int temDenL = L.den;
	int temNumD = R.num;
	int temDenD = R.den;
	Rc fin = (temNumD * temNumL) / (temDenL * temDenD);
	return fin;
}

ostream& operator<<(ostream& output, const Rc& Num)
{
}