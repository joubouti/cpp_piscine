#include <string>
#include <iostream>
#include <fstream>

int str_replace(std::string& str, std::string word, std::string replace) {
    int count = 0;
    std::size_t found = str.find(word);
    // std::string newString = str;
    while (found != std::string::npos) {
        str = str.replace(found, word.length(), replace);
        found = str.find(word, found + 1);
        count++;
    }
    return count;
}

int main(int argc, char** argv) {
    if (argc == 4) {
        std::string fileName = argv[1];
        std::string s1 = argv[2];
        std::string s2 = argv[3];

        // Opening the file to read from
        std::ifstream ifs(fileName);
        if (ifs.fail()) {
            std::cout << "./replace: " << fileName << ": " << std::strerror(errno) << std::endl;
            return EXIT_FAILURE;
        }
        // Opening the file where to replace
        std::ofstream ofs(fileName + ".replace");
        if (ofs.fail())
        {
            std::cout << "./replace: " << fileName << ".replace: " << std::strerror(errno) << std::endl;
            return EXIT_FAILURE;
        }

        std::string line;
        if (ifs.is_open()){
            int count = 0;
            while ( std::getline (ifs, line) ){
                std::string newString = line;
                count += str_replace(newString, s1, s2);
                ofs << newString;
                if (!ifs.eof())
                    ofs << std::endl;
            }
            if (count > 0)
                std::cout << "you replaced '" << s1 << "' with '" << s2 << "' " << count << " times." << std::endl;
            else
                std::cout << "Couldn't found the string '" << s1 << "'" << std::endl;
            ifs.close();
            ofs.close();
        }
    } else {
        std::cout << "wrong arguments: ./replace [filename] [string] [replace]" << std::endl;
    }
}