#include "Span.hpp"
#include <vector>
#include <string>

Span::Span() : N(0)
{}

Span::Span(unsigned int N) : N(N)
{}

Span::Span(const Span& other)
{
	N = other.N;
	data = other.data;
}

Span &Span::operator=(const Span& other)
{
	if (this != &other)
	{
		N = other.N;
		data = other.data;
	}
	return (*this);
}

Span::~Span()
{}

void	Span::addNumber(unsigned int value)
{
	if (data.size() >= N)
		throw std::out_of_range("You Reach The Max Of Element");
	data.push_back(value);
}

unsigned int	Span::shortestSpan()
{
	unsigned int	diff;
	unsigned int	min;

	if (data.size() < 2)
		throw  std::runtime_error("Not Enough element");
	
	std::vector<int>tmp = data;
	std::sort(tmp.begin(), tmp.end());

	min = abs(tmp[1] - tmp[0]);

	for (size_t i = 0; i + 1 < tmp.size(); i++)
	{
		diff = abs(tmp[i + 1] - tmp[i]);
		if (diff <= min)
			min = diff;
	}
	return (min);
}



unsigned int	Span::longestSpan()
{
	int	max = 0;
	std::sort(data.begin(), data.end());

	max = data[data.size() - 1] - data[0];

	return (max);
}

void	Span::addAll(std::vector<int>& v)
{
	for (unsigned int i = 0; i < v.size(); i++)
	{
		if (data.size() >= N)
			throw std::exception();
		data.push_back(v[i]);
	}
}
