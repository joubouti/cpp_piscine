#include "span.hpp"
#include <algorithm>
#include <iterator>

Span::Span() : _max_size(0) {
}

Span::Span(unsigned int n) : _max_size(n) {
}

Span::~Span() {
}

Span::Span(const Span & s) : _max_size(0) {
    *this = s;
}

Span & Span::operator=(const Span & s) {
    _max_size = s._max_size;
    _numbers = s._numbers;
    return (*this);
}

void    Span::addNumber(int n) {
    if (_numbers.size() < _max_size) {
        _numbers.push_back(n);
    } else {
        throw std::runtime_error("Span is full");
    }
}

int     Span::shortestSpan() const {
    if (_numbers.size() <= 1)
        throw std::runtime_error("Span is empty or it has only one item");
    int smallest = INT_MAX;
    std::vector<int> tmp(_numbers);
    std::sort(tmp.begin(), tmp.end());
    std::vector<int>::const_iterator prev = tmp.begin();
    for (std::vector<int>::const_iterator it = tmp.begin() + 1; it != tmp.end(); ++it) {
        int diff = std::abs(*it - *prev);
        if (diff < smallest)
            smallest = diff;
        prev = it;
    }
    return (smallest);
}

int     Span::longestSpan() const {
    if (_numbers.size() <= 1)
        throw std::runtime_error("Span is empty or it has only one item");
    int max = *std::max_element(_numbers.begin(), _numbers.end());
    int min = *std::min_element(_numbers.begin(), _numbers.end());
    return (max - min);
}
