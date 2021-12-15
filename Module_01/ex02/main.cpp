#include <iostream>


int main()
{
    std::string my_string = "HI THIS IS BRAIN";

    // pointer to my string
    std::string* stringPTR = &my_string;

    std::string &stringREF =  my_string;

    const std::string s = "test";
    s += 'a';   

    std::cout << "the adress of the string : " << &my_string << std::endl;
    std::cout << "the adress of the string using stringPTR: " << stringPTR << std::endl;
    std::cout << "the adress of the string using stringREF: " << &stringREF << std::endl;
    std::cout << "display the string using stringPTR: " << *stringPTR << std::endl;
    std::cout << "display the string using stringREF: " << stringREF << std::endl;
}