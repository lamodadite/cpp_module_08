#include "Span.hpp"

Span::Span() {}

Span::~Span() {}

Span::Span(const Span &obj) {
	*this = obj;
}

Span& Span::operator=(const Span &obj) {
	v = obj.v;
	N = obj.N;
	return (*this);
}

Span::Span(unsigned int n) : N(n) {}

void Span::addNumber(int n) {
	if (static_cast<unsigned int>(v.size()) < N)
		v.push_back(n);
	else
		throw std::runtime_error("Span is full");
}

void Span::addNumbers(std::vector<int> numbers)
{
	if (v.size() + numbers.size() > N)
		throw std::runtime_error("Span hasn't enough capacity");
	v.insert(v.end(), numbers.begin(), numbers.end());
}

long long	Span::shortestSpan()
{
	long long	shortestSpan;
	long long	tmp;

	if (v.empty() || v.size() == 1)
		throw std::runtime_error("Span doesn't exist");

	std::sort(v.begin(), v.end());
	shortestSpan = static_cast<long long>(v[1]) - static_cast<long long>(v[0]);
	for (size_t i = 1; i < v.size() - 1; i++) {
		tmp = static_cast<long long>(v[i + 1]) - static_cast<long long>(v[i]);
		if (shortestSpan > tmp)
			shortestSpan = tmp;
	}
	return (shortestSpan);
}

long long	Span::longestSpan()
{
	long long	max;
	long long	min;
	long long	longestSpan;

	if (v.empty() || v.size() == 1)
		throw std::runtime_error("Span doesn't exist");

	max = *(std::max_element(v.begin(), v.end()));
	min = *(std::min_element(v.begin(), v.end()));
	longestSpan = max - min;
	return (longestSpan);
}

void	Span::print() {
	for (size_t	i = 0; i < v.size(); i++) {
		std::cout << v[i];
		if (i < v.size() - 1)
			std::cout << ", ";
	}
	std::cout << std::endl;
}