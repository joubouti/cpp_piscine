#ifndef PONY_HPP
# define PONY_HPP
#include <string>
class Pony {
public:
    Pony(std::string name);
    ~Pony();

    std::string getName() const;
    std::string getColor() const;
    int         getAge() const;
    int         getWeight() const;
    int         getGender() const;

    void        setName(std::string name);
    void        setColor(std::string color);
    void        setAge(int days);
    void        setWeight(int kg);
    void        setGender(char gender);

    void        eat() const;
    void        speak() const;
private:
    std::string _name;
    std::string _color;
    int         _age;
    int         _weight;
    char        _gender;
};

void    ponyOnTheStack();
void    ponyOnTheHeap();

#endif