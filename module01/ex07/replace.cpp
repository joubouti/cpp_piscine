#include <string>
#include <iostream>
#include <fstream>

int main(int argc, char** argv) {
    if (argc == 4) {
        std::string fileName = argv[1];
        std::string s1 = argv[2];
        std::string s2 = argv[3];
        std::ifstream ifs(fileName);
        std::ofstream ofs(fileName + ".replace");
        std::string line;
        if (ifs.is_open()){
            while ( std::getline (ifs, line) ){
                std::size_t found = line.find(s1);
                std::string newString = line;
                while (found != std::string::npos) {
                    newString = newString.replace(found, s1.length(), s2);
                    found = line.find(s1, found + 1);
                }
                ofs << newString << '\n';
            }
            ifs.close();
        }
    } else {
        std::cout << "wrong arguments: ./replace [filename] [string] [replace]" << std::endl;
    }
}