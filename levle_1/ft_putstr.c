#include <unistd.h>
#include <stdio.h>

char * ft_strlen(char *s)
{
    int i = 0;

    while(s[i] != '\0')
    {
        write(1, &s[i], 1);
        i++;
    }
    write(1, "\n", 1);
}

int main()
{
char s[]= "hello my mather";
ft_strlen(s);
return (0);
}
