#include "serialize.hpp"
#include <iostream>

int main(void) {

    srand(time(NULL));
    for (int i = 0; i < 5; i++) {
        void *p = serialize();
        Data *data = deserialize(p);
        std::cout << "TEST " << i << ": " << std::endl;
        std::cout << "\tstr1: " << data->s1 << std::endl;
        std::cout << "\tn:    " << data->n << std::endl;
        std::cout << "\tstr2: " << data->s2 << std::endl;

        delete data;
    }


    return (0);
}