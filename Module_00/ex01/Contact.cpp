#include "Contact.hpp"

void    Contact::set_firstName()
{
	std::cout << "first name : ";
	std::getline(std::cin, _f_name);
	while (_f_name.empty())
	{
		std::cout << "Please enter a non-empty name : ";
		std::getline(std::cin, _f_name);
	}
}

void Contact::set_lastName()
{
	std::cout << "last name : ";
	std::getline(std::cin, _l_name);
	while (_l_name.empty())
	{
		std::cout << "Please enter a non-empty name : ";
		std::getline(std::cin, _l_name);
	}
}

void    Contact::Contact::set_nickname()
{
	std::cout << "Nickname : ";
	std::getline(std::cin, _nickname);

}

void    Contact::set_number()
{
	std::cout << "Phone number : ";
	std::getline(std::cin, _number);
	while (_number.empty())
	{
		std::cout << "Please enter a phone number : ";
		std::getline(std::cin, _number);
	}
}

void    Contact::set_secret()
{
	std::cout << "Darkest secret : ";
	std::getline(std::cin, _secret);
}

// Getters :
std::string Contact::get_firstName()
{
	return (_f_name);
}
std::string Contact::get_lastName()
{
	return (_l_name);
}
std::string Contact::get_nickname()
{
	return (_nickname);
}
std::string Contact::get_number()
{
	return (_number);
}
std::string Contact::get_secret()
{
	return (_secret);
}