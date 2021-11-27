#include "Phonebook.hpp"

int main()
{
    Phonebook book;
    std::string cmd;
    int count = 0;
    int i = 0;
    int index;

    while (1)
    {
        std::cout << "Enter a command : ";
        std::cin >> cmd;
        if (cmd.compare("ADD") == 0)
        {
            
            std::cout << "first name : ";
            std::cin >> book.contact[i].f_name;

            std::cout << "last name : ";
            std::cin >> book.contact[i].l_name;

            std::cout << "Nickname : ";
            std::cin >> book.contact[i].nickname;

            std::cout << "phone number : ";
            std::cin >> book.contact[i].number;

            std::cout << "Darkest secret : ";
            std::cin >> book.contact[i].secret;
            
            std::cout << "contact added!" << std::endl;
            i++;
            count++;
            if (i == 8)
                i = 0;
        }
        else if (cmd.compare("SEARCH") == 0)
        {
            std::cout << "typed search\n";
            if (count > 8)
                count = 8;
            book.list_contacts(count);
            std::cout << "Enter an index : ";
            std::cin >> index;
            while ()

        }
        else if (cmd.compare("EXIT") == 0)
            break;
    }

    std::cout << "The program exited\n";

}