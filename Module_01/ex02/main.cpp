#include <iostream>


int main()
{
    std::string str = "HI THIS IS BRAIN";

    // pointer to str
    std::string* stringPTR = &str;

    // reference to str
    std::string &stringREF =  str;

    const std::string s = "test";

    std::cout << "the adress of the string : " << &str << std::endl;
    std::cout << "the adress of the string using stringPTR: " << stringPTR << std::endl;
    std::cout << "the adress of the string using stringREF: " << &stringREF << std::endl;

    std::cout << std::endl;
    std::cout << "The value of the string variable: " << str << std::endl;
    std::cout << "The value pointed to by stringPTR: " << *stringPTR << std::endl;
    std::cout << "The value pointed to by stringREF: " << stringREF << std::endl;
}