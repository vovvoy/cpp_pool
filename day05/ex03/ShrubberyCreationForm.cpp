#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) :
	Form(target, "Shrubbery", \
	145, 137)
{
    return ;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &src) :
	Form("Anonymous", "Shrubbery", \
	145, 137)
{
    *this = src;
    return ;
}

ShrubberyCreationForm::~ShrubberyCreationForm(void)
{
    return ;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator= (const ShrubberyCreationForm &rhs)
{
    static_cast <void> (rhs);
    return (*this);
}

void ShrubberyCreationForm::execute(const Bureaucrat &executor) const
{
    std::ofstream  out_file;

    Form::execute(executor);
    out_file.open(getTarget() + "_shrubbery",
                 std::ofstream::out | std::ofstream::trunc);
    if (out_file.fail())
    {
        std::cerr << "Error openning the outfile" << std::endl;
    }

	out_file << "         .         .  .      +     .      .          ." << std::endl;
	out_file << "    .           .      .     #       .           ." << std::endl;
	out_file << "       .          .         ###            .      .      ." << std::endl;
	out_file << "     .          .   \"#:. .:##\"##:. .:#\"  .      ." << std::endl;
	out_file << "             .      . \"####\"###\"####\"  ." << std::endl;
	out_file << "      .         \"#:.    .:#\"###\"#:.    .:#\"  .        .       ." << std::endl;
	out_file << " .                 \"#########\"#########\"        .        ." << std::endl;
	out_file << "       .        \"#:.  \"####\"###\"####\"  .:#\"   .       ." << std::endl;
	out_file << "    .         .  \"#######\"\"##\"##\"\"#######\"                  ." << std::endl;
	out_file << "	           .\"##\"#####\"#####\"##\"           .      ." << std::endl;
	out_file << "	. \"#:. ...  .:##\"###\"###\"##:.  ... .:#\"     ." << std::endl;
	out_file << "	.     \"#######\"##\"#####\"##\"#######\"      .     ." << std::endl;
	out_file << "	.    .     \"#####\"\"#######\"\"#####\"    .      ." << std::endl;
	out_file << "        	.     \"      000      \"    .     ." << std::endl;
	out_file << "	   .         .   .   000     .        .       ." << std::endl;
	out_file << "    .. .. ..................O000O........................ ......" << std::endl;
    out_file.close();
    return ;
}
