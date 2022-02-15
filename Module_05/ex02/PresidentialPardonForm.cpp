#include "PresidentialPardonForm.hpp"


PresidentialPardonForm::PresidentialPardonForm(std::string target)
: Form("PresidentialPardonForm", 25, 5), _target(target)
{
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& p)
: Form(p.getName(), p.getSignGrade(), p.getExecGrade()), _target(p._target)
{
}

PresidentialPardonForm& PresidentialPardonForm::operator = (const PresidentialPardonForm& p)
{
    _target = p._target;
    return *this;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
}

void PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
    requirements(executor);

    std::cout << _target << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}
