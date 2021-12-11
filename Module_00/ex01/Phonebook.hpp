#include <iostream>
#include <iomanip>
#include <string>
#include <limits>


class Contact {
	private:
		std::string _f_name;
		std::string _l_name;
		std::string _nickname;
		std::string _number;
		std::string _secret;

	public:
		//  Setters :
		void set_firstName()
		{
		    std::cout << "first name : ";
	    	std::getline(std::cin, _f_name);
			while (_f_name.empty())
			{
				std::cout << "Please enter a non-empty name : ";
	    		std::getline(std::cin, _f_name);
			}
		}
		void set_lastName()
		{
			std::cout << "last name : ";
			std::getline(std::cin, _l_name);
			while (_l_name.empty())
			{
				std::cout << "Please enter a non-empty name : ";
	    		std::getline(std::cin, _l_name);
			}
		}
		void set_nickname()
		{
			std::cout << "Nickname : ";
			std::getline(std::cin, _nickname);

		}
		void set_number()
		{
			std::cout << "Phone number : ";
			std::getline(std::cin, _number);
			while (_number.empty())
			{
				std::cout << "Please enter a phone number : ";
	    		std::getline(std::cin, _number);
			}
		}
		void set_secret()
		{
			std::cout << "Darkest secret : ";
			std::getline(std::cin, _secret);
		}

		// Getters :
		std::string get_firstName()
		{
			return (_f_name);
		}
		std::string get_lastName()
		{
			return (_l_name);
		}
		std::string get_nickname()
		{
			return (_nickname);
		}
		std::string get_number()
		{
			return (_number);
		}
		std::string get_secret()
		{
			return (_secret);
		}

};

class PhoneBook {
	private:
		Contact		contact[8];
		int			_contactID;
		int			_contactNum;
		std::string	turnc(std::string str);
		void		show_contact();

	public:
		PhoneBook(): _contactID(0), _contactNum(0) {};
		void	add_contact();
		void	list_contacts();
};
