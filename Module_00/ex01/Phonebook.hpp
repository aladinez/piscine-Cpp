#include <iostream>
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
        void add_contact(int i, std::string name)
        {
            contact[i].f_name = name;
        }
};