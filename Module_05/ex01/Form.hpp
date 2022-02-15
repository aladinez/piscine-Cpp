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

    Form(std::string name, int signG, int execG);
    Form(const Form& f);
    ~Form();
    
    std::string getName() const;
    int getSignGrade() const;
    int getExecGrade() const;
    bool getSign() const;

    void beSigned(Bureaucrat& b);
};

std::ostream& operator << (std::ostream& os, const Form& f);



#endif