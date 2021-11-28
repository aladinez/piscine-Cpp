#include "PhoneBook.hpp"

int main()
{
	PhoneBook book;
	std::string cmd;

	while (1)
	{
		std::cout << "Enter a command : ";
		std::getline(std::cin, cmd);
		if (cmd.compare("ADD") == 0)
			book.add_contact();
		else if (cmd.compare("SEARCH") == 0)
			book.list_contacts();
		else if (cmd.compare("EXIT") == 0)
			break;
	}
	std::cout << "The program exited" << std::endl;
}
