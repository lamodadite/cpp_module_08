#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

#include <stack>

template <typename T>
class	MutantStack : public std::stack<T>
{
	public :
		MutantStack();
		MutantStack(const MutantStack &obj);
		MutantStack &operator=(const MutantStack &obj);
		~MutantStack();

		typedef typename MutantStack<T>::stack::container_type::iterator	iterator;
		iterator	begin();
		iterator	end();

		typedef typename MutantStack<T>::stack::container_type::reverse_iterator	reverse_iterator;
		reverse_iterator	rbegin();
		reverse_iterator	rend();

		typedef typename MutantStack<T>::stack::container_type::const_iterator	const_iterator;
		const_iterator	cbegin();
		const_iterator	cend();

		typedef typename MutantStack<T>::stack::container_type::const_reverse_iterator	const_reverse_iterator;
		const_reverse_iterator	crbegin();
		const_reverse_iterator	crend();
};

template <typename T>
MutantStack<T>::MutantStack() {}

template <typename T>
MutantStack<T>::MutantStack(const MutantStack &obj) {
	*this = obj;
}

template <typename T>
MutantStack<T> &MutantStack<T>::operator=(const MutantStack<T> &obj) {
	(void)obj;
	return (*this);
}

template <typename T>
MutantStack<T>::~MutantStack() {}


template <typename T>
typename MutantStack<T>::iterator MutantStack<T>::begin() {
	return (this->c.begin());
}

template <typename T>
typename MutantStack<T>::iterator MutantStack<T>:: end() {
	return (this->c.end());
}

template <typename T>
typename MutantStack<T>::reverse_iterator MutantStack<T>:: rbegin() {
	return (this->c.rbegin());
}

template <typename T>
typename MutantStack<T>::reverse_iterator MutantStack<T>:: rend() {
	return (this->c.rend());
}

template <typename T>
typename MutantStack<T>::const_iterator MutantStack<T>:: cbegin() {
	return (this->c.begin());
}

template <typename T>
typename MutantStack<T>::const_iterator MutantStack<T>:: cend() {
	return (this->c.end());
}

template <typename T>
typename MutantStack<T>::const_reverse_iterator MutantStack<T>:: crbegin() {
	return (this->c.rbegin());
}

template <typename T>
typename MutantStack<T>::const_reverse_iterator MutantStack<T>:: crend() {
	return (this->c.rend());
}

#endif