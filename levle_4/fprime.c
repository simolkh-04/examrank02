#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    if (argc == 2)
    {
        int number = atoi(argv[1]);
        int i = 2;
        while (number > 1)
        {
            if (number % i == 0)
            {
                printf("%d", i);
                number = number / i;
                if (number > 1)
                    printf("*");
            }
            else
                i++;
        }
    }
    printf("\n");
    return 0;
}