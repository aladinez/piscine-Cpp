#include "Form.hpp"
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main()
{
    Intern someRandomIntern;
    Form* rrf;
    // rrf = someRandomIntern.makeForm("robotomy request", "Bender");
    // rrf = someRandomIntern.makeForm("shrubbery creation", "Bender");
    rrf = someRandomIntern.makeForm("presidential pardon", "Bender");
    if (rrf)
    {
        try
        {
            Bureaucrat b("boo", 1);
            rrf->beSigned(b);
            rrf->execute(b);
        }
        catch(const std::exception& e)
        {
            std::cout << e.what() << '\n';
        }
    }
}
