#include "Form.hpp"

// nested classes' member functions :
const char* Form::GradeTooHighException::what() const throw()
{
    return ("Grade Too High");
}

const char* Form::GradeTooLowException::what() const throw()
{
    return ("Grade Too Low");
}

// member functions :

Form::Form(std::string name, int signG, int execG)
: _name(name), _isSigned(false), _signGrade(signG), _execGrade(execG)
{
    if (signG < 1 || execG < 1)
        throw GradeTooHighException();
    else if (signG > 150 || execG > 150)
        throw GradeTooLowException();
}

std::ostream& operator << (std::ostream& os, const Form& f)
{
    os << f.getName() << " has : " << f.getSignGrade() << " Sign Grade, " << f.getExecGrade()  << " Exec Grade, and it is : ";
    if (f.getSign())
        os << "Signed" << std::endl;
    else
        os << "Not Signed" << std::endl;
    return os;
}

Form::~Form()
{
}

void Form::beSigned(Bureaucrat& b)
{
    if (b.getGrade() > _signGrade)
        throw GradeTooLowException();
    else
        _isSigned = true;
}

std::string Form::getName() const
{
    return (_name);
}

int Form::getSignGrade() const
{
    return (_signGrade);
}

int Form::getExecGrade() const
{
    return (_execGrade);
}

bool Form::getSign() const
{
    return (_isSigned);
}

