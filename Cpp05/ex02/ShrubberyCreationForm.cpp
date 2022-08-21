#include "ShrubberyCreationForm.hpp"

void	Tree_build(std::string target)
{
	std::ofstream out_file;
	std::string rep = "_shrubbery";
    std::string new_line = "\n";
    size_t found;
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
    while (tree[0])
    {
        found = tree.find(new_line);
        out_file << tree.substr(0, found + 1);
        tree = tree.substr(found + 1, tree.length() + 1);
    }
}
ShrubberyCreationForm::ShrubberyCreationForm(void)
{

}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string target) : Form(target, 145, 137)
{

}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &ref)
{
	// (*this) = ref;
}
// const  ShrubberyCreationForm ShrubberyCreationForm::operator=(const  ShrubberyCreationForm &)
// {

// }
ShrubberyCreationForm::~ShrubberyCreationForm(void)
{
}

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	if(executor.getGrade() <= this->get_grade_sign()
	&& executor.getGrade() <= this->get_grade_sign())
		Tree_build(get_Name());
	else
		throw Low_mem;
}