#include "Form.hpp"
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"

int main()
{
    try
    {
        ShrubberyCreationForm  f("formaa");
        Bureaucrat b("FOO", 100);
        std::cout << f;
        // f.beSigned(b);
        b.signForm(f);
        std::cout << f;    
        f.execute(b);
    }
    catch (std::exception &e)
    {
        std::cout << "EXCEPTION" << e.what() << std::endl;
    }
}
