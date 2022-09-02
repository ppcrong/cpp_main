#include <iostream>
#include "FuncAdd.h"
#include "FuncMinus.h"

int main(int argc, char *argv[])
{
	std::cout << "Hello world!" << std::endl << std::endl;

	FuncAdd a;
	std::cout << "add(1, 1) = " << a.add(1, 1) << std::endl << std::endl;

	FuncMinus m;
	std::cout << "minus(1, 1) = " << m.minus(1, 1) << std::endl << std::endl;
}