#include <unistd.h>

void	print_hex(int n)
{
	char hex[] = "0123456789abcdef";

	if (n >= 16)
		print_hex(n / 16);
	write(1, &hex[n % 16], 1);
}

int	main(int argc, char **argv)
{
	int num = 0;
	int i = 0;

	if (argc == 2)
	{
		while (argv[1][i])
		{
			num = num * 10 + (argv[1][i] - '0');
			i++;
		}
		print_hex(num);
	}
	write(1, "\n", 1);
	return 0;
}
