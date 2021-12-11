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
	if (_contactNum == 0)
	{
		std::cout << "No contact added yet!" << std::endl;
		return;
	}
	std::cout << "|" << std::left << std::setw(10) << "index" << "|" << std::setw(10) << "First name" << "|" << std::setw(10) << "Last name" << "|" << std::setw(10) << "Nickname" << "|" << std::endl;
	std::cout << std::setfill ('-');
	std::cout << "|" << std::setw (10) << "-" << "+" << std::setw (10) << "-" << "+" << std::setw (10) << "-" << "+" << std::setw (10) << "-" << "|";
	std::cout << std::setfill (' ') << std::endl;
	while (i < _contactNum)
	{
		std::cout << "|" << std::left << std::setw(10) << i << "|" << std::setw(10) << turnc(contact[i].get_firstName()) << "|" << std::setw(10) << turnc(contact[i].get_lastName()) << "|" << std::setw(10) << turnc(contact[i].get_nickname()) << "|" << std::endl;
		i++;
	}
	show_contact();
	std::cin.ignore();
}

void PhoneBook::show_contact()
{
	int i = -1;
	std::cout << "Enter an index : ";
	std::cin >> i;
	// std::cin.ignore(std::numeric_limits<std::streamsize>::max());
	
	if (i > 8 || i < 0 || i >= _contactNum || _contactNum == 0)
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
	contact[_contactID].set_firstName();

	contact[_contactID].set_lastName();

	contact[_contactID].set_nickname();

	contact[_contactID].set_number();

	contact[_contactID].set_secret();

	std::cout << "contact added!" << std::endl;
	_contactID++;
	if (_contactID == 8)
		_contactID = 0;
	if (_contactNum < 8)
		_contactNum++;
}
