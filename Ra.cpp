#include "Rc.h"
#include <iostream>
#include <string>
#include <vector>

using std::vector;
using std::cout;
using std::cin;

void menu();
int selMen();

int main(int argc, char const *argv[])
{
	vector<string> Historial;
	vector<Rc> listaRac;
	int opcMen, num, den;
	do
	{
		menu();
		opcMen = selMen();
		if (opcMen == 1)
		{
			cout << "Numerador: ";
			cin >> num;
			cout << "Denominador: "
			cin >> den;
			Rc rac(num, den);
			listaRac.push_back(rac);
		}
		else if (opcMen == 2)
		{
			if (listaRac.size() == 0)
			{
				cout << "no hay Racionales para sumar\n";
			}else
			{

			}
		}
		else if (opcMen == 3)
		{
			if (listaRac.size() == 0)
			{
				cout << "no hay Racionales para restar\n";
			}else
			{
				
			}
		}
		else if (opcMen == 4)
		{
			if (listaRac.size() == 0)
			{
				cout << "no hay Racionales para multiplicar\n";
			}else
			{
				
			}
		}
		else if (opcMen ==5)
		{
			if (listaRac.size() == 0)
			{
				cout << "no hay Racionales para dividir\n";
			}else
			{
				
			}
		}
		else if (opcMen == 6)
		{
			if (Historial.size() == 0)
			{
				cout << "no hay Racionales en tu Historial\n";
			}else
			{
				for (int i = 0; i < Historial.size(); ++i)
				{
					cout << i << "-" << Historial[i] << "\n";
				}	
			}
		}
		else
		{
			cout << "Nein!!";
		}
	} while (opcMen != 7);
	Rc a(30,8), b(12,6), c;
	cout << a.toString();
	cout << "\n";
	cout << b.toString();
	cout << "\n";
	c = a * b;
	cout << c.toString();
	cout << "\n";
	return 0;
}

void menu()
{
	cout << "1-)Crear Racional\n2-)Sumar Racional\n3-)Resta Racional\n4-)Mult Racional\n5-Div Racional\n6-)Historial\n7-Salir\n";
}

int selMen()
{
	int resp;
	cin >> resp;
	return resp;
}
