#ifndef _PRESIDENTIAL_HPP
#define _PRESIDENTIAL_HPP

#include <string>
#include <iostream>

#include "Form.hpp"

class PresidentialPardonForm : public Form
{
private:
    std::string _target;
public:
    PresidentialPardonForm(std::string target);
    PresidentialPardonForm(const PresidentialPardonForm&);
    PresidentialPardonForm& operator = (const PresidentialPardonForm&);
    ~PresidentialPardonForm();
    void execute(Bureaucrat const & executor) const;
};

#endif