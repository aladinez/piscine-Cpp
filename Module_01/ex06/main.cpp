#include "Karen.hpp"

int findIndex(std::string level)
{
    std::string tab[4]= {"DEBUG", "INFO", "WARNING", "ERROR"};
    for (int i = 0; i < 4; i++)
        if (level == tab[i])
            return (i);
    return (4);
}

int main(int ac, char **av)
{
    if (ac != 2)
    {
        std::cout << "Error : arguments." << std::endl;
        return 0;
    }
    Karen krn;
    switch (findIndex(av[1]))
    {
        case 0:
            std::cout << "[DEBUG]" << std::endl;
            krn.complain("DEBUG");
        case 1 :
            std::cout << "[INFO]" << std::endl;
            krn.complain("INFO");
        case 2 :
            std::cout << "[WARNING]" << std::endl;
            krn.complain("WARNING");
        case 3 :
            std::cout << "[ERROR]" << std::endl;
            krn.complain("ERROR");
            break;
        default :
            std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;        
    }
    return 0;
}