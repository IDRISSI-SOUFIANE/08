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
	if (data.size() < 2)
		throw  std::out_of_range("Not Enough Number");
	unsigned int	dif ;
	unsigned int	min = 0;
	std::sort(data.begin(), data.end());

	for (unsigned int i = 0; i < N; i++)
	{
		for (unsigned int j = i + 1; j < N; j++)
		{
			dif = abs(data[i] - data[j]);
			if (dif <= min)
				min = dif;
		}
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
