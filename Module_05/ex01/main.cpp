#include "Form.hpp"
#include "Bureaucrat.hpp"

int main()
{
    try
    {
        Form f("formaa", 20, 56);
        // Bureaucrat b("FOO", 10);
        Bureaucrat b("FOO", 100);
        std::cout << f;
        f.beSigned(b);
        // b.signForm(f);
        std::cout << f;    

    }
    catch (std::exception &e)
    {
        std::cout << "EXCEPTION : " << e.what() << std::endl;
    }
}
