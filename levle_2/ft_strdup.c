#include <stdlib.h>
#include <stdio.h>
#include <string.h>

char	*ft_strdup(const char *s1)
{
	char	*str;
	size_t	i;

	if (s1 == NULL)
		return (NULL);
	str = (char *)malloc(sizeof(*s1) * (strlen(s1) + 1));
	if (str == NULL)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		str[i] = s1[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

int main ()
{
    const char s[] = "abcd";
    char *result = ft_strdup(s);

    printf("%s\n", result);
    free(result);
    return (0);
}