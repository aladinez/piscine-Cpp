// links : https://www.cplusplus.com/reference/cstdlib/srand/

#ifndef _ROBOTOMY_HPP
#define _ROBOTOMY_HPP
#include <string>
#include <fstream>
#include <stdlib.h>     /* srand, rand */
#include <time.h>

#include "Form.hpp"

class RobotomyRequestForm : public Form
{
private:
    std::string _target;
public:
    RobotomyRequestForm(std::string target);
    RobotomyRequestForm(const RobotomyRequestForm&);
    RobotomyRequestForm& operator = (const RobotomyRequestForm&);
    ~RobotomyRequestForm();
    void execute(Bureaucrat const & executor) const;
};

#endif