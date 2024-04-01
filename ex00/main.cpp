#include "easyfind.hpp"
#include <iostream>
#include <vector>
#include <list>

int	main()
{
	std::vector<int>	v;
	std::list<int>		l;

	for(int i = 0; i < 5; i++) { 
		v.push_back(i);
		l.push_back(i);
	}

	try {
		std::vector<int>::iterator iter;
		iter = easyfind(v, 2);
		std::cout << *iter << std::endl;
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}

	try {
		std::vector<int>::iterator iter;
		iter = easyfind(v, 10);
		std::cout << *iter << std::endl;
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;
	
	try {
		std::list<int>::iterator iter;
		iter = easyfind(l, 4);
		std::cout << *iter << std::endl;
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	
	try {
		std::list<int>::iterator iter;
		iter = easyfind(l, 10);
		std::cout << *iter << std::endl;
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
}