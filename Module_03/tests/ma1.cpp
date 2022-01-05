#include "test.hpp"
#include <iostream>
int A::h = 0;
int main()
{
	A f;
	std::cout << &f.a << std::endl;
	std::cout << &f.b - &f.a << " diff" << std::endl;
	std::cout << &f.b << std::endl;
	std::cout << &f.a - &A::h<< std::endl;

}
