#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <algorithm>
#include <vector>
#include <stdexcept>
#include <ctime>

class Span
{
    private:
        std::vector<int>        _values;
        unsigned int            _N;
    public:
        Span();
        Span(const unsigned int& N);
        Span(const Span& other);
        Span    &operator=(const Span& other);
        ~Span();
        void    addNumber(int num);
        int     shortestSpan();
        int     longestSpan();
};

#endif