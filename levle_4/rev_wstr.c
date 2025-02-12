#include <unistd.h>

void rev_wstr(char *str)
{
    int i = 0;
    int start;
    int end;

    while (str[i])
        i++;
    i--;

    while (i >= 0)
    {
        while (i >= 0 && (str[i] == ' ' || str[i] == '\t'))
            i--;

        end = i;

        while (i >= 0 && str[i] != ' ' && str[i] != '\t')
            i--;
        start = i + 1;

        write(1, &str[start], end - start + 1);

            write(1, " ", 1);
    }
}

int main(int ac, char **av)
{
    if (ac == 2)
    {
        rev_wstr(av[1]);
    }
    write(1, "\n", 1);
    return (0);
}
