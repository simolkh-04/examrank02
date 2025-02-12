#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb > 9)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
		ft_putchar(nb + '0');
}

int		main(int ac, char **av)
{
	(void)av;
	ac--;
	ft_putnbr(ac);
	ft_putchar('\n');
	return (0);
}



/*#include <unistd.h>

int main(int ac, char **av)
{
    int i = 1;
    char c;

    if (ac > 1)
    {
        while (av[i])
        {
            i++;
        }
        c = i + '0' - 1;
        write(1, &c, 1); 
    }
    write(1, "\n", 1);
    return(0);
}*/
