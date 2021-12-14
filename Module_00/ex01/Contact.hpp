#include <iostream>

class Contact {
	private:
		std::string _f_name;
		std::string _l_name;
		std::string _nickname;
		std::string _number;
		std::string _secret;

	public:
		//  Setters :
		void set_firstName();
		void set_lastName();
		void set_nickname();
		void set_number();
		void set_secret();


		// Getters :
		std::string get_firstName();
		std::string get_lastName();
		std::string get_nickname();
		std::string get_number();
		std::string get_secret();

};