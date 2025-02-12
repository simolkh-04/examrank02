#include <stdio.h>

unsigned char	reverse_bits(unsigned char octet)
{
	int i = 0;
	unsigned char res = 0;

	while(i < 8)
	{
		res = res * 2 + (octet % 2);
		octet = octet/2;
		i++;
	}
	return(res);
}

int main()
{
    unsigned char num =64;
    printf("%u\n", reverse_bits(num));

    return 0;
}