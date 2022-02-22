#include "Karen.hpp"


void Karen::debug( void )
{
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void Karen::info( void )
{
    std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;

}

void Karen::warning( void )
{
    std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;

}

void Karen::error( void )
{
    std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void Karen::complain( std::string level )
{
    std::string tab[4]= {"DEBUG", "INFO", "WARNING", "ERROR"};
    void (Karen::* fptr[4]) (void) = {&Karen::debug, &Karen::info, &Karen::warning, &Karen::error};

    for (int i = 0; i < 4; i++)
    {
        if (level == tab[i]) // The this pointer points to the instance data for the object ...
            (this->*(fptr[i]))();
    }
}