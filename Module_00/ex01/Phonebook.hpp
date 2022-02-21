#include <iostream>
#include <iomanip>
#include <string>
#include <limits>
#include <sstream>
#include "Contact.hpp"



class PhoneBook {
	private:
		Contact		contact[8];
		int			_contactID;
		std::string	turnc(std::string str);
		void		show_contact();

	public:
		PhoneBook();
		void	add_contact();
		void	list_contacts();
};
