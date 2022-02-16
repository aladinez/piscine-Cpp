#include "Intern.hpp"

Intern::Intern()
{
}

Intern::~Intern()
{
}
Intern::Intern(const Intern&)
{
}
Intern& Intern::operator = (const Intern&)
{
    return (*this);
}


Form* Intern::makeForm(std::string form, std::string target)
{
    std::string tab[3]= {"robotomy request", "shrubbery creation", "presidential pardon"};
    Form *f[3];
    f[0] = new RobotomyRequestForm(target);
    f[1] = new ShrubberyCreationForm(target);
    f[2] = new PresidentialPardonForm(target);

    int j = -1;
    for (int i = 0; i < 3; i++)
    {
        if (form != tab[i]) 
            delete f[i];
        else
            j = i;
    }
    if (j != -1)
    {
        std::cout << "Intern creates " << f[j]->getName() << std::endl;
        return (f[j]);
    }
    std::cout << "ERROR : Form not found." << std::endl;
    return (NULL);
}