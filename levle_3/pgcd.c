#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int nbr1, nbr2, gcd;

    if (argc == 3)
    {
        nbr1 = atoi(argv[1]);
        nbr2 = atoi(argv[2]);

        if (nbr1 > 0 && nbr2 > 0)
        {
            if (nbr1 > nbr2)
                gcd = nbr2;
            else
                gcd = nbr1;

            while (gcd > 0)
            {
                if (nbr1 % gcd == 0 && nbr2 % gcd == 0)
                {
                    break;
                }
                gcd--;
            }
            printf("%d", gcd);
        }
    }
    printf("\n");
    return 0;
}
