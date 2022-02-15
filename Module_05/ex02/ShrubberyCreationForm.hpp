#ifndef _SHRUBBERY_HPP
#define _SHRUBBERY_HPP
#include <string>
#include <fstream>

#include "Form.hpp"



class ShrubberyCreationForm : public Form
{
private:
    std::string _target;
public:
    ShrubberyCreationForm(std::string target);
    ShrubberyCreationForm(const ShrubberyCreationForm&);
    ShrubberyCreationForm& operator = (const ShrubberyCreationForm&);
    ~ShrubberyCreationForm();
    void execute(Bureaucrat const & executor) const;
};

#endif