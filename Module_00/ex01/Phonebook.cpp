#include "PhoneBook.hpp"

std::string PhoneBook::turnc(std::string str)
{
	std::string str2 = str;

	if (str2.size() > 10)
	{
		str2 = str.substr(0, 9);
		str2 += '.';
	}
	return (str2);

}

void PhoneBook::list_contacts()
{
	int i = 0;
	if (_contactID == 0)
	{
		std::cout << "No contact added yet!" << std::endl;
		return;
	}
	std::cout << "|" << std::left << std::setw(10) << "index" << "|" << std::setw(10) << "First name" << "|" << std::setw(10) << "Last name" << "|" << std::setw(10) << "Nickname" << "|" << std::endl;
	std::cout << std::setfill ('-');
	std::cout << "|" << std::setw (10) << "-" << "+" << std::setw (10) << "-" << "+" << std::setw (10) << "-" << "+" << std::setw (10) << "-" << "|";
	std::cout << std::setfill (' ') << std::endl;
	while (i < _contactID)
	{
		std::cout << "|" << std::left << std::setw(10) << i << "|" << std::setw(10) << turnc(contact[i].get_firstName()) << "|" << std::setw(10) << turnc(contact[i].get_lastName()) << "|" << std::setw(10) << turnc(contact[i].get_nickname()) << "|" << std::endl;
		i++;
	}
	show_contact();
}

void PhoneBook::show_contact()
{
	int i;
	std::string cmd = "";
	std::cout << "Enter an index : ";
	std::getline(std::cin, cmd);
	std::stringstream my_stream(cmd);
	my_stream >> i;
	my_stream.str("");
	my_stream.clear();

	if (i > 8 || i < 0 || i >= _contactID || _contactID == 0 || cmd.length() > 1 || !std::isdigit(cmd[0]))
		std::cout << "Not a valid index!" << std::endl;
	else
	{
		std::cout << std::left << std::setw(20) << "First name" << ":" << contact[i].get_firstName() << std::endl;
		std::cout << std::left << std::setw(20) << "Last name" << ":" << contact[i].get_lastName() << std::endl;
		std::cout << std::left << std::setw(20) << "Nickname" << ":" << contact[i].get_nickname() << std::endl;
		std::cout << std::left << std::setw(20) << "Phone number" << ":" << contact[i].get_number() << std::endl;
		std::cout << std::left << std::setw(20) << "Darkest secret" << ":" << contact[i].get_secret() << std::endl;
	}
}

void PhoneBook::add_contact()
{
	if (_contactID == 8)
	{
		for (int i = 0; i < _contactID; i++)
			contact[i] = contact[i + 1];
		_contactID--;
	}
	contact[_contactID].set_firstName();
	contact[_contactID].set_lastName();
	contact[_contactID].set_nickname();
	contact[_contactID].set_number();
	contact[_contactID].set_secret();

	std::cout << "contact added!" << std::endl;
	_contactID++;
}
