#include "RobotomyRequestForm.hpp"


RobotomyRequestForm::RobotomyRequestForm(std::string target)
: Form("RobotomyRequestForm", 72, 45), _target(target)
{
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& s)
: Form(s.getName(), s.getSignGrade(), s.getExecGrade()), _target(s._target)
{
}

RobotomyRequestForm& RobotomyRequestForm::operator = (const RobotomyRequestForm& s)
{
    _target = s._target;
    return *this;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
}

void RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
    requirements(executor);

    srand (time(0));
    if (rand() % 2 == 0)
        std::cout << "dzzzzzzt, " << _target << " has been robotomized successfully" << std::endl;
    else
        std::cout << "The robotomy failed." << std::endl;
}
