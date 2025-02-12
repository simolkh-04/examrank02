#include <unistd.h>

void print_bits(unsigned char octet)
{
    int i = 8;
    while (i >= 0)
    {
        if (octet & (1 << i))
            write(1, "1", 1);
        else
            write(1, "0", 1);
        i--; 
    }
}
int main()
{
	unsigned char num = 2;
	print_bits(num);
	write(1, "\n", 1);
	return 0;
}