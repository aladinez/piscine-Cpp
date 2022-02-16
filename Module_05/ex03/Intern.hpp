#ifndef _INTERN_HPP
#define _INTERN_HPP
#include <iostream>
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class Intern
{
public:
    Intern();
    Intern(const Intern&);
    Intern& operator = (const Intern&);
    ~Intern();
    Form* makeForm(std::string form, std::string target);
};

#endif