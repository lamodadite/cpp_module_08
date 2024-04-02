#ifndef SPAN_HPP
# define SPAN_HPP

#include <algorithm>
#include <vector>
#include <stdexcept>
#include <iostream>

class Span {
	private:
		std::vector<int> v;
		unsigned int N;
		Span();
	public:
		~Span();
		Span(const Span &obj);
		Span& operator=(const Span &obj);

		Span(unsigned int n);
		void addNumber(int n);
		void addNumbers(std::vector<int> numbers);
		long long shortestSpan();
		long long longestSpan();
		void print();
};

#endif