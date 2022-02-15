#include "ShrubberyCreationForm.hpp"


ShrubberyCreationForm::ShrubberyCreationForm(std::string target)
: Form("ShrubberyCreationForm", 145, 137), _target(target)
{
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& s)
: Form(s.getName(), s.getSignGrade(), s.getExecGrade()), _target(s._target)
{
}

ShrubberyCreationForm& ShrubberyCreationForm::operator = (const ShrubberyCreationForm& s)
{
    _target = s._target;
    return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
    requirements(executor);

    std::ofstream file;
    file.open(_target + "_shrubbery");
    file << "                '.,\n"
    << "                  'b      *\n"
    << "                   '$    #.\n"
    << "                    $:   #:\n"
    << "                    *#  @):\n"
    << "                    :@,@):   ,.**:'\n"
    << "          ,         :@@*: ..**'\n"
    << "           '#o.    .:(@'.@*\"'\n"
    << "              'bq,..:,@@*'   ,*\n"
    << "              ,p$q8,:@)'  .p*'\n"
    << "             '    '@@Pp@@*'\n"
    << "                   Y7'.'\n"
    << "                  :@):.\n"
    << "                 .:@:'.\n"
    << "               .::(@:.\n";
    file.close();
}
