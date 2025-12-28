#include "Span.hpp"

int main()
{
	try
	{
		Span sp(13);

		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);

		sp.print();

		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;

		std::cout << "------------------------------\n";

		std::vector<int> n;
		n.push_back(0);
		n.push_back(4);
		n.push_back(3);
		n.push_back(43);
		n.push_back(7);
		n.push_back(1337);
		n.push_back(42);

		sp.addAll(n);

		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	return 0;
}
