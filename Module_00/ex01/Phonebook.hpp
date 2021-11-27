#include <iostream>
#include <iomanip>
#include <string>


class Contact {
    public:
        std::string f_name;
        std::string l_name;
        std::string nickname;
        std::string number;
        std::string secret;
};

class Phonebook {
    public:
        Contact contact[8];
        std::string turnc(std::string str)
        {
            std::string str2 = str;
            
            if (str2.size() > 10)
            {
                str2 = str.substr(0, 9);
                str2 += '.';     
            }
            return (str2);

        }

        void list_contacts(int end)
        {
            int i = 0;

            std::cout << "|" << std::left << std::setw(10) << "index" << "|" << std::setw(10) << "first name" << "|" << std::setw(10) << "last Name" << "|" << std::endl;
            while (i < end)
            {
                std::cout << "|" << std::left << std::setw(10) << i << "|" << std::setw(10) << turnc(contact[i].f_name) << "|" << std::setw(10) << turnc(contact[i].l_name) << "|" << std::endl;
                i++;
            }
        }
};