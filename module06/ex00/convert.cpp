#include <iostream>
#include <string>
#include <sstream>
#include <cstdlib>
#include <iomanip>
#include <limits>
#include <cmath>
#include <cstring>
#include <cfloat>

bool impossible = false;

bool is_number(const std::string& s)
{
    if (s.at(s.length() - 1) == 'f')
        return( std::strspn( s.substr(0, s.length() - 1).c_str(), "-.0123456789" ) == (s.size() - 1) );
    else
        return( std::strspn( s.c_str(), "-.0123456789" ) == s.size() );
}

void toChar(long double v) {
    char c = static_cast<char>(v);

    std::cout << "char: ";
    if (impossible || std::isinf(v) || std::isnan(v) ||
        v > std::numeric_limits<char>::max() || v < std::numeric_limits<char>::min()) {
        std::cout << "Impossible" << std::endl;
    } else if (!std::isprint(c)) {
        std::cout << "Non displayable" << std::endl;
    } else {
        std::cout << "'" << c << "'" << std::endl;
    }
}

void toInt(long double v) {
    int i = static_cast<int>(v);

    std::cout << "int: ";
    if (impossible || std::isinf(v) || std::isnan(v) ||
        v > std::numeric_limits<int>::max() || v < std::numeric_limits<int>::min()) {
        std::cout << "Impossible" << std::endl;
    } else {
        std::cout << i << std::endl;
    }
}

void toFloat(long double v) {
    float f = static_cast<float>(v);

    std::cout << "float: ";
    if (impossible || ((v > FLT_MAX || v < -FLT_MAX) && not std::isinf(v))) {
        std::cout << "Impossible" << std::endl;
    } else {
        std::cout << std::fixed << std::setprecision(1) << f << 'f' << std::endl;
    }
}

void toDouble(long double v) {
    double d = static_cast<double>(v);

    std::cout << "double: ";
    if (impossible || ((v > DBL_MAX || v < -DBL_MAX) && not std::isinf(v))) {
        std::cout << "Impossible" << std::endl;
    } else {
        std::cout << std::fixed << std::setprecision(1) << d << std::endl;
    }
}

int main(int argc, char *argv[]) {
    if (argc == 2) {
        std::string decimal = argv[1];
        try {
            std::stringstream ss(decimal);
            long double value;
            ss >> value;

            if (!is_number(decimal)) {

                if (decimal == "nan" || decimal == "nanf")
                    value = nan("");
                else if (decimal == "+inf" || decimal == "+inff")
                    value = INFINITY;
                else if (decimal == "-inf" || decimal == "-inff")
                    value = -INFINITY;
                else
                    impossible = true;
            }
            
            toChar(value);
            toInt(value);
            toFloat(value);
            toDouble(value);
        } catch (std::exception const & e) {
            std::cout << "error: " << e.what() << std::endl;
        }
    } else {
        std::cout << "Usage: ./convert [decimal]" << std::endl;
    }
    return 0;
}