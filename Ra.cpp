#include "Rc.h"
#include <iostream>
#include <string>

using std::cout;
using std::cin;

int main(int argc, char const *argv[])
{
	Rc a(6,-3);
	cout << a.toString();
	return 0;
}