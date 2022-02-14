#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name)
{
    std::cout << getName() << " : Constructor Called" << std::endl;
    if (grade <  1)
        throw GradeTooHighException();
    else if (grade > 150)
        throw GradeTooLowException();

    _grade = grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat& b) : _name(b.getName())
{
    std::cout << getName() << " : Copy Constructor Called" << std::endl;
     _grade = b.getGrade();
}

std::ostream& operator <<(std::ostream& os, const Bureaucrat& b)
{
    os << b.getName() << ", bureaucrat grade " << b.getGrade() << ".";
    return os;
}

Bureaucrat::~Bureaucrat()
{
    std::cout << getName() << " : Destructor Called" << std::endl;
}

std::string Bureaucrat::getName() const
{
    return (_name);
}

int Bureaucrat::getGrade() const
{
    return (_grade);
}

void Bureaucrat::increment()
{
    if (_grade  - 1 <  1)
        throw GradeTooHighException();
    else
        _grade--;
}
void Bureaucrat::decrement()
{
    if (_grade + 1 > 150)
        throw GradeTooLowException();
    else
        _grade++;
}