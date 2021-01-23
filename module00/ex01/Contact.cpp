#include "Contact.hpp"

int 	Contact::_count = 0;

Contact::Contact() {
    _count++;
}

Contact::~Contact() {
    _count--;
}

int Contact::getCount() {
    return _count;
}

void Contact::setFirstName(std::string firstName) {
    _firstName = firstName;
}

void Contact::setLastName(std::string lastName) {
    _lastName = lastName;
}

void Contact::setNickName(std::string nickName) {
    _nickName = nickName;
}

void Contact::setLogin(std::string login) {
    _login = login;
}

void Contact::setPostalAddress(std::string postalAddress) {
    _postalAddress = postalAddress;
}

void Contact::setEmailAddress(std::string emailAddress) {
    _emailAddress = emailAddress;
}

void Contact::setPhoneNumber(std::string phoneNumber) {
    _phoneNumber = phoneNumber;
}

void Contact::setBirthdayDate(std::string birthdatDate) {
    _birthdayDate = birthdatDate;
}

void Contact::setFavoriteMeal(std::string favoriteMeal) {
    _favoriteMeal = favoriteMeal;
}

void Contact::setUnderwearColor(std::string underwearColor) {
    _underwearColor =  underwearColor;
}

void Contact::setDarkestSecret(std::string darkestSecret) {
    _darkestSecret = darkestSecret;
}


std::string Contact::getFirstName() const {
    return _firstName;
}
std::string Contact::getLastName() const {
    return _lastName;
}
std::string Contact::getNickName() const {
    return _nickName;
}
std::string Contact::getLogin() const {
    return _login;
}
std::string Contact::getPostalAddress() const {
    return _postalAddress;
}
std::string Contact::getEmailAddress() const {
    return _emailAddress;
}
std::string Contact::getPhoneNumber() const {
    return _phoneNumber;
}
std::string Contact::getBirthdayDate() const {
    return _birthdayDate;
}
std::string Contact::getFavoriteMeal() const {
    return _favoriteMeal;
}
std::string Contact::getUnderwearColor() const {
    return _underwearColor;
}
std::string Contact::getDarkestSecret() const {
    return _darkestSecret;
}
