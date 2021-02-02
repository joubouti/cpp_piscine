#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <cstddef>
#include <stdexcept>

template <typename T>
class Array {
private:
    size_t _size;
    T   *_arr;
public:
    Array<T>() : _size(0), _arr(NULL) {
        _arr = new T[_size]();
    }

    Array<T>(unsigned int n) : _size(n), _arr(NULL)  {
        _arr = new T[_size]();
    }

    Array<T>(const Array<T> &arr) : _arr(NULL) {
        *this = arr;
    }

    ~Array<T>() {
        if (_arr) {
            delete[] _arr;
        }
    }

    Array<T> & operator=(const Array<T> &arr) {
        if (_arr) {
            delete[] _arr;
        }
        _size = arr._size;
        _arr = new T[_size]();
        for (size_t i = 0; i < _size; i++) {
            _arr[i] = arr._arr[i];
        }
        return (*this);
    }

    T   &   operator[](int i) const {
        if (i < 0 || static_cast<size_t>(i) >= _size) {
            throw std::out_of_range("out of range");
        }
        return (_arr[i]);
    }

    size_t size() const {
        return _size;
    }

};

#endif