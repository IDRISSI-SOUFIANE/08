#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <algorithm>
#include <vector>

class Span
{
private:
	unsigned int N;
	std::vector<int> data;

public:
	Span();
	Span(unsigned int N);
	Span(const Span &other);
	Span &operator=(const Span &other);
	~Span();

	void addNumber(unsigned int value);
	unsigned int shortestSpan();
	unsigned int longestSpan();

	void addAll(std::vector<int> &v);

	void print()
	{
		for (size_t i = 0; i < data.size(); i++)
		{
			std::cout << data[i] << "\n";
		}
	}
};

#endif
