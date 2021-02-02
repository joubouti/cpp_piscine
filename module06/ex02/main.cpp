#include "Identifier.hpp"

int main(void) {

    srand(time(NULL));

    for (int i = 0; i < 5; i++) {
        Base    *base;

        base = generate();
        std::cout << "TEST " << i << ": " << std::endl;
        std::cout << "\t pointer   : ";
        identify_from_pointer(base);
        std::cout << "\t reference : ";
        identify_from_reference(*base);
    }

    return (0);
}