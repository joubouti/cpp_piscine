#ifndef SPAN_HPP
# define SPAN_HPP

#include <cstddef>
#include <vector>

class Span
{
private:
    std::vector<int>    _numbers;
    unsigned int        _max_size;
public:
    Span();
    Span(unsigned int n);
    Span(const Span & s);
    ~Span();

    Span & operator=(const Span & s);
    
    void    addNumber(int n);
    int     shortestSpan() const;
    int     longestSpan() const;

    template <typename ForwardIterator>
    void    addNumber(ForwardIterator first, ForwardIterator last) {
        if (std::distance(first, last) > _max_size)
            throw std::runtime_error("Span is full");
        _numbers.insert(_numbers.end(), first, last);
    }

    std::vector<int>::iterator begin() { return _numbers.begin(); };
    std::vector<int>::iterator end() { return _numbers.end(); };

};




#endif