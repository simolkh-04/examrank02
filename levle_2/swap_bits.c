#include <stdio.h>

unsigned char swap_bits(unsigned char octet)
{
	return ((octet >> 4) | (octet << 4));
}
int main()
{
    unsigned char num = 5;  
    printf(" %u\n", swap_bits(num));

    return 0;
}