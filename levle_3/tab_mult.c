#include <unistd.h>

int ft_atoi(char *str)
{
    int i= 0;
    int sign = 1;
    int res = 0;

    while(str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
    {
        i++;
    }
    while(str[i] == '-' || str[i] =='+')
    {
        if(str[i] == '-')
        {
            sign = -1;
        }
        i++;
    }
    while(str[i] >= '0' && str[i] <= '9')
    {
        res = res * 10 + (str[i] - '0');
        i++;
    }
    return(res * sign);
}
void ft_putnbr(int nbr)
{
    char c;

    if(nbr > 9)
    {
        ft_putnbr(nbr / 10);
    }
    c = nbr % 10 + '0';
    write(1, &c, 1);
}

int main(int ac, char **av)
{
    int i = 1;
    if(ac == 2)
    {
        int num = ft_atoi(av[1]);
        while(i <= 9)
        {
            ft_putnbr(i);
            write(1, " x ", 3);
            ft_putnbr(num);
            write(1, " = ", 3);
            ft_putnbr(num * i);
            write(1, "\n", 1);
            i++;
        }
        return(0);
        
    }
    write(1, "\n", 1);
    return(0);
}