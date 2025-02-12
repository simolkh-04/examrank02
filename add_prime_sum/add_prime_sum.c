#include<unistd.h>
int ft_atoi(char *str)
{
	int i = 0;
	int r = 0;
	while(str[i] >= '0' && str[i] <= '9')
	{
		r = r * 10 + (str[i] - '0');
		i++;
	}
	return(r);
}
void ft_putnbr(int n)
{
	char c;
	if(n > 9)
	{
		ft_putnbr(n / 10);
	}
	c = n % 10 + '0';
	write(1, &c, 1);
}
int is_prime(int num)
{
	int i = 2;
	while(i <= num)
	{
		if(num % i == 0)
			return(0);
		i++;
	}
	return(1);
}
int main(int ac, char **av)
{
	int sum;
	int nb;
	if(ac == 2)
	{
		nb = ft_atoi(av[1]);
		sum = 0;
		while(nb > 0)
		{
			if(is_prime(nb))
				sum += nb;
			nb--;
		}
		ft_putnbr(sum);
	}
	if (ac != 2)
	{
		ft_putnbr(0);
	}
	write(1, "\n", 1);
	return (0);
}
