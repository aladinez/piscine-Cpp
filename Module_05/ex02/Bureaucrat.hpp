#ifndef _BUREAUCRAT_HPP
#define _BUREAUCRAT_HPP

#include <string>
#include <exception>
#include <iostream>

class Form;

class Bureaucrat
{
private:
    const std::string _name;
    int _grade;
    Bureaucrat& operator = (const Bureaucrat& b);
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
    
    Bureaucrat(std::string name, int grade);
    Bureaucrat(const Bureaucrat& b);
    ~Bureaucrat();
    std::string getName() const;
    int getGrade() const;
    void increment();
    void decrement();
    void signForm(Form& f);
};

// operator takes only two params, putting it inside the class means that it has 3 : this, ostream, b
// solution : outside the class OR make it friend.
std::ostream& operator << (std::ostream& os, const Bureaucrat& b);

#endif