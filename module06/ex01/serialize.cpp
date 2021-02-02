#include "serialize.hpp"

std::string gen_random(const int len) {
    
    std::string tmp_s;
    static const char alphanum[] =
        "0123456789"
        "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
        "abcdefghijklmnopqrstuvwxyz";
    

    tmp_s.reserve(len);

    for (int i = 0; i < len; ++i) 
        tmp_s += alphanum[rand() % (sizeof(alphanum) - 1)];
    
    
    return tmp_s;
    
}


void * serialize(void) {
    Data *data = new Data;

    data->s1 = gen_random(8);
    data->n = rand() * 10;
    data->s2 = gen_random(8);

    return (reinterpret_cast<void *>(data));
}

Data * deserialize(void * raw) {
    return (reinterpret_cast<Data *>(raw));
}