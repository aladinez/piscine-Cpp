#include "PhoneBook.hpp"

int main()
{
	PhoneBook book;
	std::string cmd;
	int looper = 1;

	while (looper)
	{
		// std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		std::cout << "Enter a command : ";
		std::cin >> cmd;
		std::getline(std::cin, cmd);
		if (cmd.compare("ADD") == 0)
			book.add_contact();
		else if (cmd.compare("SEARCH") == 0)
			book.list_contacts();
		else if (cmd.compare("EXIT") == 0)
			looper = 0;
		// cmd = "";
	}
	std::cout << "The program exited" << std::endl;
}
