#include <iostream>

int main(int ac , char **av)
{
    if (av[1] == NULL)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    else
    {
        for(int i = 1; i < ac; i++)
        {
            for(size_t j = 0; j < strlen(av[i]); j++)
            {
                if(islower(av[i][j]))
                    av[i][j] = toupper(av[i][j]);
            }
            if (i != ac - 1)
                std::cout << av[i] << " ";
            else
                std::cout << av[i] << std::endl;
        }
    }
    return 0;
}