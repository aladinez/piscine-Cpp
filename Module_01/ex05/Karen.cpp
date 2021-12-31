/* LINKS : 
==> pointers to mem func :  https://isocpp.org/wiki/faq/pointers-to-members
                        http://websites.umich.edu/~eecs381/handouts/Pointers_to_memberfuncs.pdf

==> this pointer : https://www.geeksforgeeks.org/this-pointer-in-c/

==> array of pointers to functions : https://docs.microsoft.com/en-us/troubleshoot/cpp/declare-pointers-to-functions
*/

#include "Karen.hpp"


void Karen::debug( void )
{
    std::cout << "I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I just love it!" << std::endl;
}

void Karen::info( void )
{
    std::cout << "I cannot believe adding extra bacon cost more money. You don’t put enough! If you did I would not have to ask for it!" << std::endl;

}

void Karen::warning( void )
{
    std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming here for years and you just started working here last month." << std::endl;

}

void Karen::error( void )
{
    std::cout << "This is unacceptable, I want to speak to the manager now." << std::endl;

}

void Karen::complain( std::string level )
{
    std::string tab[4]= {"DEBUG", "INFO", "WARNING", "ERROR"};
    void (Karen::* fptr[4]) (void) = {&Karen::debug, &Karen::info, &Karen::warning, &Karen::error};
    // void (Karen::* fptr[4]) (void);
    // fptr[0] = &Karen::debug;
    // fptr[1] = &Karen::info;
    // fptr[2] = &Karen::warning;
    // fptr[3] = &Karen::error;

    for (int i = 0; i < 4; i++)
    {
        if (level == tab[i]) // The this pointer points to the instance data for the object ...
            (this->*(fptr[i]))();
    }
}