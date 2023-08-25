#include <unistd.h>

void	print_bits(unsigned char octet)
{
	int	i = 8;
	unsigned char bit;

	while (i--)
	{
		bit = (octet >> i & 1)  + '0';
		write (1, &bit, 1);
	}
}

unsigned char swap_bits(unsigned char octet)
{
	return ((octet >> 4) | (octet << 4));
}

int main()
{
	print_bits('K');
	write(1, "\n", 1);
	print_bits(swap_bits('K'));
}
