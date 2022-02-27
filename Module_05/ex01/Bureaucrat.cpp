#include "Bureaucrat.hpp"
#include "Form.hpp"

// nested classes' member functions :
const char* Bureaucrat::GradeTooHighException::what() const throw()
{
    return ("Grade Too High");
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
    return ("Grade Too Low");
}

// member functions :
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

void Bureaucrat::signForm(Form& f)
{
    // if (_grade > f.getSignGrade())
    //     std::cout << _name << " couldn’t sign " << f.getName() << " because Grade is too low." << std::endl;
    // else
    // {
    //     std::cout << _name << "  signed " << f.getName() << std::endl;
    //     f.beSigned(*this);
    // }
    try
    {
        f.beSigned(*this);
        std::cout << _name << "  signed " << f.getName() << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cout << _name << " couldn’t sign " << f.getName() << " because " << e.what() << std::endl;
    }
    
}
