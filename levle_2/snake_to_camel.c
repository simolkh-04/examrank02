// #include <unistd.h>

// int main(int argc, char **argv)
// {
// 	int i = 0;
	
// 	if (argc == 2)
// 	{
// 		while(argv[1][i] != '\0')
// 		{
// 			if (argv[1][i] == '_')
// 			{
// 				i++;
// 				argv[1][i] = argv[1][i]-32;
// 			}
// 			write (1, &argv[1][i], 1);
// 			i++;
// 		}
// 	}
// 	write(1, "\n", 1);
// 	return (0);
// }
#include <unistd.h>

int main(int ac, char **av)
{
	int i = 0;

	if(ac == 2)
	{
		while(av[1][i])
		{
			if(av[1][i] == '_')
			{
				av[1][i + 1] -= 32;
			}
			if(av[1][i] == '_')
			{
				i++;
			}
			write(1, &av[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return(0);
}
