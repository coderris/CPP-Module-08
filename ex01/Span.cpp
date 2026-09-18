#include "Span.hpp"

Span::Span() : _values(), _N(rand()) {}

Span::Span(const unsigned int& N) : _values(), _N(N) {}

Span::Span(const Span& other)
{
    *this = other;
    return ;
}

Span    &Span::operator=(const Span& other)
{
    if (this != &other)
    {
        this->_values = other._values;
        this->_N = other._N;
    }
    return *this;
}

Span::~Span(){};

void    Span::addNumber(int num)
{
    if (_values.size() == static_cast<size_t>(_N))
        throw   std::out_of_range("Can´t add more numbers");
    _values.push_back(num);
}

int     Span::shortestSpan()
{
    if (_values.size() <= 1)
        throw std::length_error("Not valid size");
    std::sort(_values.begin(), _values.end());
    return _values[1] - _values[0];
}

int     Span::longestSpan()
{
    if (_values.size() <= 1)
        throw std::length_error("Not valid size");
    std::sort(_values.begin(), _values.end());
    return  _values[_N - 1]- _values[0];
}