#include "Span.hpp"

int main()
{
	std::vector<int> v;
	std::vector<int> longV;
	
	try {
		Span span(3);
		
		std::cout << "<< add number test >>" << std::endl;

		span.addNumber(0);
		span.addNumber(1);
		span.addNumber(2);
		span.print();
		span.addNumber(3);
	} catch(std::exception &e) {
		std::cout << e.what() << std::endl;
	}

	try {
		Span span(10);
		int arr[] = {2, 3, 4, 5, 6, 7, 8, 9, 10};
		std::vector<int>	v(arr, arr + sizeof(arr) / sizeof(arr[0]));

		std::cout << std::endl << "<< add numbers test>>" << std::endl;
		span.addNumber(1);
		span.addNumbers(v);
		span.print();
		span.addNumbers(v);
	} catch(std::exception &e) {
		std::cout << e.what() << std::endl;
	}

	try {
		Span				span(100);
		std::vector<int>	v;

		std::cout << std::endl << "<< valid short and long span test1 >>" << std::endl;
		for (int i = 0; i < 100; i++) {
			v.push_back(i);
		}
		span.addNumbers(v);
		std::cout << "short span: " << span.shortestSpan() << std::endl;
		std::cout << "long span: " << span.longestSpan() << std::endl;
	} catch(std::exception &e) {
		std::cout << e.what() << std::endl;
	}

	try {
		Span				span(10);
		int					arr[] = {-100, 1, 8, 11, 20, 30, 40, 100};
		std::vector<int>	v(arr, arr + sizeof(arr) / sizeof(arr[0]));

		std::cout << std::endl << "<< valid short and long span test2 >>" << std::endl;

		span.addNumbers(v);
		span.print();
		std::cout << "shortest span: " << span.shortestSpan() << std::endl;
		std::cout << "longest span: " << span.longestSpan() << std::endl;
	} catch(std::exception &e) {
		std::cout << e.what() << std::endl;
	}

	try {
		Span	span(10);

		std::cout << std::endl << "<< invalid short span test >>" << std::endl;
		std::cout << "short span: " << span.shortestSpan() << std::endl;
	} catch(std::exception &e) {
		std::cout << e.what() << std::endl;
	}

	try {
		Span	span(10);

		span.addNumber(1);
		std::cout << "short span: " << span.shortestSpan() << std::endl;
	} catch(std::exception &e) {
		std::cout << e.what() << std::endl;
	}

	try {
		Span	span(10);

		std::cout << std::endl << "<< invalid long span test >>" << std::endl;
		std::cout << "long span: " << span.longestSpan() << std::endl;
	} catch(std::exception &e) {
		std::cout << e.what() << std::endl;
	}

	try {
		Span	span(10);

		span.addNumber(1);
		std::cout << "long span: " << span.longestSpan() << std::endl;
	} catch(std::exception &e) {
		std::cout << e.what() << std::endl;
	}

	try {
		Span				span(20000);
		std::vector<int>	v;

		std::cout << std::endl << "<< 20000 span test >>" << std::endl;
		for(int i = 0; i < 20000; i++) {
			v.push_back(i);
		}
		span.addNumbers(v);
		std::cout << "short span: " << span.shortestSpan() << std::endl;
		std::cout << "long span: " << span.longestSpan() << std::endl;
	} catch(std::exception &e) {
		std::cout << e.what() << std::endl;
	}
}

/*
int main() {
  Span sp = Span(5);
  sp.addNumber(6);
  sp.addNumber(3);
  sp.addNumber(17);
  sp.addNumber(9);
  sp.addNumber(11);
  std::cout << sp.shortestSpan() << std::endl;
  std::cout << sp.longestSpan() << std::endl;
return 0; }
*/