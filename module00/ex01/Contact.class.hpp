#ifndef CONTACT_CLASS_HPP
# define CONTACT_CLASS_HPP
#include <string>

class Contact {
private:
    std::string _firstName;
    std::string _lastName;
    std::string _nickName;
    std::string _login;
    std::string _postalAddress;
    std::string _emailAddress;
    std::string _phoneNumber;
    std::string _birthdayDate;
    std::string _favoriteMeal;
    std::string _underwearColor;
    std::string _darkestSecret;
    static int  _count;

public:
    Contact();
    void setFirstName(std::string firstName);
    void setLastName(std::string lastName);
    void setNickName(std::string nickName);
    void setLogin(std::string login);
    void setPostalAddress(std::string postalAddress);
    void setEmailAddress(std::string emailAddress);
    void setPhoneNumber(std::string phoneNumber);
    void setBirthdayDate(std::string birthdatDate);
    void setFavoriteMeal(std::string favoriteMeal);
    void setUnderwearColor(std::string underwearColor);
    void setDarkestSecret(std::string darkestSecret);

    static int getCount();
    std::string getFirstName() const;
    std::string getLastName() const;
    std::string getNickName() const;
    std::string getLogin() const;
    std::string getPostalAddress() const;
    std::string getEmailAddress() const;
    std::string getPhoneNumber() const;
    std::string getBirthdayDate() const;
    std::string getFavoriteMeal() const;
    std::string getUnderwearColor() const;
    std::string getDarkestSecret() const;

     
};

#endif