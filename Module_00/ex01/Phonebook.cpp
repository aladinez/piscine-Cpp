#include "Phonebook.hpp"

int main()
{
    Phonebook book;

    int i = 0;

    while (i < 8)
    {
        std::cout << "add first name of contact " << i << " : ";
        std::cin >> book.contact[i].f_name;
        // book.contact[i].f_name = "ali\n" ;
        i++;
    }
    i = 0;
    while (i < 8)
    {
        std::cout << book.contact[i].f_name << "\n";
        i++;
    }

}