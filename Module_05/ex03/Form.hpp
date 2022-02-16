#ifndef _FORM_HPP
#define _FORM_HPP

#include <string>
#include <iostream>
#include <exception>
#include "Bureaucrat.hpp"

class Form
{
private:
    const std::string _name;
    bool _isSigned;
    const int _signGrade;
    const int _execGrade;
    Form& operator = (const Form& f);
public:
    class GradeTooHighException : public std::exception
    {
        public:
            const char* what() const throw();
    };
    class GradeTooLowException : public std::exception
    {
        public:
            const char* what() const throw();
    };
    class FormNotSignedException : public std::exception
    {
        public:
            const char* what() const throw();
    };

    Form(std::string name, int signG, int execG);
    Form(const Form& f);
    virtual ~Form();
    
    std::string getName() const;
    int getSignGrade() const;
    int getExecGrade() const;
    bool getSign() const;

    void beSigned(Bureaucrat& b);
    virtual void execute(Bureaucrat const & executor) const = 0;
    void requirements(Bureaucrat const & executor) const;
};

std::ostream& operator << (std::ostream& os, const Form& f);



#endif