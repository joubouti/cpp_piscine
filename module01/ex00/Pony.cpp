#include "Pony.hpp"
#include <iostream>

Pony::Pony(std::string name) : _name(name) {
    std::cout << "Pony " << name << " is born" << std::endl;
}

Pony::~Pony() {
    std::cout << "Pony " << _name << " died" << std::endl;
}


std::string Pony::getName() const {
    return _name;
}

std::string Pony::getColor() const {
    return _color;
}

int         Pony::getAge() const {
    return _age;
}

int         Pony::getWeight() const {
    return _weight;
}

int         Pony::getGender() const {
    return _gender;
}

void        Pony::setName(std::string name) {
    _name = name;
}

void        Pony::setColor(std::string color) {
    _color = color;
}

void        Pony::setAge(int days) {
    if (days > 0) {
        _age = days;
    }
}

void        Pony::setWeight(int kg) {
    if (kg > 0) {
        _weight = kg;
    }
}

void        Pony::setGender(char gender) {
    _gender = gender;
}

void        Pony::eat() const {
    std::cout << _name << " is eating" << std::endl;
}

void        Pony::speak() const {
    std::cout << _name << ": neigh" << std::endl;
}

void    ponyOnTheStack() {
    Pony myPony("Scooter");
    myPony.eat();
}

void    ponyOnTheHeap() {
    Pony *myPony = new Pony("Bella");
    myPony->speak();
    delete myPony;
}

