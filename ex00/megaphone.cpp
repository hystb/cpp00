#include <iostream>

int	main(int argc, char **argv)
{
	int		i = 0;
	char	*str = NULL;
	char	c = 0;

	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		argv++;
		while(*argv)
		{
			str = *argv;
			while (*str)
			{
				c = *str;
				std::cout << (char)std::toupper(c);
				str++;
			}			
			argv++;
			if (*argv)
				std::cout << " ";
		}
		std::cout << std::endl;
	}
}