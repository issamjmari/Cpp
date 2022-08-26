#include "ShrubberyCreationForm.hpp"

void	Tree_build(std::string target)
{
	std::ofstream out_file;
	std::string rep = "_shrubbery";
    std::string new_line = "\n";
	std::string tree =  "            .        +          .      .          .\n"
                "     .            _        .                    .\n"
                "  ,              /;-._,-.____        ,-----.__\n"
                " ((        .    (_:#::_.:::. `-._   /:, /-._, `._,\n"
                "  `                 \\   _|`\"=:_::.`.);  \\ __/ /\n"
                "                      ,    `./  \\:. `.   )==-'  .\n"
                "    .      ., ,-=-.  ,\\, +#./`   \\:.  / /           .\n"
                ".           \\/:/`-' , ,\\ '` ` `   ): , /_  -o\n"
                "       .    /:+- - + +- : :- + + -:'  /(o-) \\)     .\n"
                "  .      ,=':  \\    ` `/` ' , , ,:' `'--\".--\"---._/`7\n"
                "   `.   (    \\: \\,-._` ` + '\\, ,\"   _,--._,---\":.__/\n"
                "              \\:  `  X` _| _,\\/'   .-'\n"
                ".               \":._:`\\____  /:'  /      .           .\n"
                "                    \\::.  :\\/:'  /              +\n"
                "   .                 `.:.  /:'  }      .\n"
                "           .           ):_(:;   \\           .\n"
                "                      /:. _/ ,  |\n"
                "                   . (|::.     ,`                  .\n"
                "     .                |::.    {\\\n"
                "                      |::.\\  \\ `.\n"
                "                      |:::(\\    |\n"
                "              O       |:::/{ }  |                  (o\n"
                "               )  ___/#\\::`/ (O \"==._____   O, (O  /`\n"
                "          ~~~w/w~\"~~,\\` `:/,-(~`\"~~~~~~~~\"~o~\\~/~w|/~\n"
                "          ~~~~~~~~~~~~~~~~~~~~~~~\\W~~~~~~~~~~~~\\|/~~\n";
	out_file.open(target + rep, std::ios::out);
  out_file << tree;
}
ShrubberyCreationForm::ShrubberyCreationForm(void)
{
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string target) : Form(target, 145, 137)
{

}

const ShrubberyCreationForm	ShrubberyCreationForm::operator=(const ShrubberyCreationForm &ref)
{
  return (ShrubberyCreationForm(ref.get_Name()));
}
ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &ref) : Form(ref.get_Name(), ref.get_grade_sign(), ref.get_grade_exec())
{
}
ShrubberyCreationForm::~ShrubberyCreationForm(void)
{
}

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	if(executor.getGrade() <= this->get_grade_sign()
	&& executor.getGrade() <= this->get_grade_sign())
  {
    Tree_build(get_Name());
  }
  else
  {
    throw Low_mem;
  }
}