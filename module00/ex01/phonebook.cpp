#include <iostream>
#include "Contact.hpp"
#include <iomanip>
#include <string>

const int	max_contacts = 8;
Contact		contacts[max_contacts];
int			contact_index = 0;
bool        isRunning = true;

void	print_welcome() {    
    std::cout   << "            _    _ _____ _     _____ ________  ___ _____               " << std::endl
                << "            | |  | |  ___| |   /  __ \\  _  |  \\/  ||  ___|              " << std::endl
                << "            | |  | | |__ | |   | /  \\/ | | | .  . || |__                " << std::endl
                << "            | |/\\| |  __|| |   | |   | | | | |\\/| ||  __|               " << std::endl
                << "            \\  /\\  / |___| |___| \\__/\\ \\_/ / |  | || |___               " << std::endl
                << "             \\/  \\/\\____/\\_____/\\____/\\___/\\_|  |_/\\____/               " << std::endl
                << "                                                                    " << std::endl
                << "                             _____ _____                                                " << std::endl
                << "                            |_   _|  _  |                                               " << std::endl
                << "                              | | | | | |                                               " << std::endl
                << "                              | | | | | |                                               " << std::endl
                << "                              | | \\ \\_/ /                                               " << std::endl
                << "                              \\_/  \\___/                                                " << std::endl
                << "                                                                    " << std::endl
                << "        ______ _   _ _____ _   _  _____  ______  _____  _____ _   __" << std::endl
                << "        | ___ \\ | | |  _  | \\ | ||  ___| | ___ \\|  _  ||  _  | | / /" << std::endl
                << "        | |_/ / |_| | | | |  \\| || |__   | |_/ /| | | || | | | |/ / " << std::endl
                << "        |  __/|  _  | | | | . ` ||  __|  | ___ \\| | | || | | |    \\ " << std::endl
                << "        | |   | | | \\ \\_/ / |\\  || |___  | |_/ /\\ \\_/ /\\ \\_/ / |\\  \\" << std::endl
                << "        \\_|   \\_| |_/\\___/\\_| \\_/\\____/  \\____/  \\___/  \\___/\\_| \\_/" << std::endl << std::endl;
}


std::string	getInput(std::string str) {
    std::string input;

    if (!str.empty())
        std::cout << str << std::endl;
    while (1) {
	    std::getline(std::cin, input);
        if (std::cin.eof())
        {
            std::cout << "Bye!" << std::endl;
            exit(0);
        }
        if (!input.empty())
            break;
        std::cin.clear();
    }
    return (input);
}

void add_contact() {
    contacts[contact_index].setFirstName(getInput("first name: "));
    contacts[contact_index].setLastName(getInput("last name: "));
    contacts[contact_index].setNickName(getInput("nickname: "));
    contacts[contact_index].setLogin(getInput("login: "));
    contacts[contact_index].setPostalAddress(getInput("postal address: "));
    contacts[contact_index].setEmailAddress(getInput("email address: "));
    contacts[contact_index].setPhoneNumber(getInput("phone number: "));
    contacts[contact_index].setBirthdayDate(getInput("birthday date: "));
    contacts[contact_index].setFavoriteMeal(getInput("favorite meal: "));
    contacts[contact_index].setUnderwearColor(getInput("underwear color: "));
    contacts[contact_index].setDarkestSecret(getInput("darkest secret: "));
    contact_index++;
}

std::string cut_string(std::string s) {
    if (s.length() > 10) {
        s = s.substr(0, 9) + '.';
    }
    return s;
}

void show_row(std::string index, std::string firstName, std::string lastName, std::string nickname) {

    std::cout   << std::left << std::setw(10) << cut_string(index) << '|'
                << std::left << std::setw(10) << cut_string(firstName) << '|'
                << std::left << std::setw(10) << cut_string(lastName) << '|'
                << std::left << std::setw(10) << cut_string(nickname) << '|' << std::endl;
}

void show_contact(int index) {

    std::cout << "first name: " << contacts[index].getFirstName() << std::endl;
    std::cout << "last name: " << contacts[index].getLastName() << std::endl;
    std::cout << "nickname: " << contacts[index].getNickName() << std::endl;
    std::cout << "login: " << contacts[index].getLogin() << std::endl;
    std::cout << "postal address: " << contacts[index].getPostalAddress() << std::endl;
    std::cout << "email address: " << contacts[index].getEmailAddress() << std::endl;
    std::cout << "phone number: " << contacts[index].getPhoneNumber() << std::endl;
    std::cout << "birthday date: " << contacts[index].getBirthdayDate() << std::endl;
    std::cout << "favorite meal: " << contacts[index].getFavoriteMeal() << std::endl;
    std::cout << "underwear color: " << contacts[index].getUnderwearColor() << std::endl;
    std::cout << "darkest secret: " << contacts[index].getDarkestSecret() << std::endl;

}

void show_contacts() {
    std::string input;
    int         index;
    show_row("index", "first name", "last name", "nickname");
    for (int i = 0; i < contact_index; i++) {
        show_row(std::to_string(i + 1), contacts[i].getFirstName(), contacts[i].getLastName(), contacts[i].getNickName());
    }
    input = getInput("contact index:");
    if (isdigit(input[0])) {
        index = std::stoi(input);
        if (index > 0 && index <= contact_index) {
            show_contact(index - 1);
        } else {
            std::cout << "contact index " << index << " is not valid!" << std::endl;
        }
    } else {
        std::cout << "contact index is not valid!" << std::endl;
    }
}

void check_input() {
    std::string cmd;
    std::cout   << "use the commands : ADD, SEARCH or EXIT" << std::endl;
    cmd = getInput("");
    if (cmd == "ADD") {
		if (contact_index >= max_contacts)
			std::cout << "You can't have more than " << max_contacts << " contacts!" << std::endl;
        else {
			add_contact();
		}
	} else if (cmd == "SEARCH") {
        if (contact_index > 0) {
            show_contacts();
        } else {
            std::cout << "You have no contacts!" << std::endl;
        }
    } else if (cmd == "EXIT" || std::cin.eof()) {
        std::cout << "Bye!" << std::endl;
        isRunning = false;
	}
}

int main( void ) {
    print_welcome();
    while (isRunning)
        check_input();
    return 0;
}