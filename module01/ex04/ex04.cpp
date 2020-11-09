#include <string>
#include <iostream>

int main() {
    std::string     brain = "HI THIS IS BRAIN";
    std::string*    brainPtr = &brain;
    std::string&    brainRef = brain;

    std::cout << "brainPtr: " << *brainPtr << std::endl;
    std::cout << "brainRef: " << brainRef << std::endl;

    return 0;
}