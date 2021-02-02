#include <iostream>
#include "Array.hpp"

class A {
private:
    int _n;
public:
    A() : _n(0) {};
    A(int n) : _n(n) {};

    void inc() {
        _n++;
    }

    int getNum() const {
        return (_n);
    }
};

std::ostream &operator<<(std::ostream &out, A &a) {
    return (out << a.getNum());
}

template<typename T>
void print(Array<T> &arr) {
    for (size_t i = 0; i < arr.size(); i++) {
        std::cout << arr[i] << ' ';
    }
    std::cout << std::endl;
}

int main() {


    // Empty Constructor
    Array<int> arr1;

    std::cout << "arr1 size: " << arr1.size() << std::endl;
    try
    {
        std::cout << "arr1 [0]: " << arr1[0] << std::endl;   
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    
    std::cout << "-----------" << std::endl;

    // Constructor with size

    Array<float> arr2(5);
    std::cout << "arr2 size: " << arr2.size() << std::endl;
    std::cout << "arr2 print: ";
    print(arr2);
    arr2[2] = 42.0;
    arr2[4] = 13.37;
    std::cout << "arr2 print: ";
    print(arr2);
    std::cout << "-----------" << std::endl;
    // Copy Constructor
    Array<float> arr3(arr2);

    // arr3 = arr2;
    std::cout << "arr3 print: ";
    print(arr3);
    arr2[1] = 1.7;
    std::cout << "arr2 print: ";
    print(arr2);
    std::cout << "arr3 print: ";
    print(arr3);
    try
    {
        arr2[42] = 1.7;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
    // Array of classes


    Array<A> arr4;

    std::cout << "arr4 size: " << arr4.size() << std::endl;
    try
    {
        std::cout << "arr4 [0]: " << arr4[0] << std::endl;   
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    
    std::cout << "-----------" << std::endl;

    // Assignment Constructor

    Array<A> arr5(6);
    Array<A> arr6;
    arr6 = arr5;
    std::cout << "arr6 size: " << arr6.size() << std::endl;

    std::cout << "arr5 print: ";
    print(arr5);
    arr5[1] = A(8);
    std::cout << "arr6 print: ";
    print(arr6);
    std::cout << "arr5 print: ";
    print(arr5);
    try
    {
        arr6[42] = A(42);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    return (0);
}

