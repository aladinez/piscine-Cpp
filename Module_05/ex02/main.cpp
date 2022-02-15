#include "Form.hpp"
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
    try
    {
        // ShrubberyCreationForm  f("formaa");
        // RobotomyRequestForm  f("formaa");
        PresidentialPardonForm  f("formaa");
        Bureaucrat b("FOO", 10);
        std::cout << f;
        f.beSigned(b);
        // b.signForm(f);
        b.executeForm(f);
        std::cout << f;    
        f.execute(b);
    }
    catch (std::exception &e)
    {
        std::cout << "EXCEPTION : " << e.what() << std::endl;
    }
}
