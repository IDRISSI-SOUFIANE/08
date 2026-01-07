#include "MutantStack.hpp"
#include <iostream>
int main()
{
	MutantStack<int> mstack;
	mstack.push(1);
	mstack.push(2);
	std::cout << mstack.top() << std::endl;
	mstack.pop();
	std::cout << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(4);
	mstack.push(5);
	//[...]
	mstack.push(6);
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	// std::cout << "(i) it: " << *it << "add:" << "\n";
	--it;
	// std::cout << "(d) it: " << *it << "\n";
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	// std::stack<int> s(mstack);
	return 0;
}
