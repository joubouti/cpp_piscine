#ifndef SERIALIZATION_HPP
# define SERIALIZATION_HPP

#include <string>
#include <ctime>
#include <unistd.h>


typedef struct  Data {
    std::string s1;
    int         n;
    std::string s2;
}               Data;

void * serialize(void);
Data * deserialize(void * raw);

#endif