#include <stdio.h>
#include <stdlib.h>
#include <string.h>

static int	count(int n)
{
	int	i;

	i = 1;
	if (n < 0)
	{
		n = -n;
		i++;
	}
	while (n >= 10)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	long	num;
	int		length;
	char	*str;

	num = (long)n;
	if (n == -2147483648)
		return (strdup("-2147483648"));
	length = count(n);
	str = (char *)malloc(sizeof(char) * (length + 1));
	if (!str)
		return (NULL);
	if (n < 0)
	{
		num = -num;
		str[0] = '-';
	}
	str[length] = '\0';
	while (num >= 10)
	{
		str[--length] = (num % 10) + '0';
		num = num / 10;
	}
	str[--length] = num + '0';
	return (str);
}

int main()
{
	int num = -42;
	char *result = ft_itoa(num);

	printf("%s\n", result);

	free(result);
	return (0);
}
