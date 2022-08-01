#include <unistd.h>

void	to_hex(unsigned char c)
{
	unsigned const char	hex[] = "0123456789abcdef";

	write(1, &hex[c / 16], 1);
	write(1, &hex[c % 16], 1);
}

void	end(unsigned char *str, int size)
{
	if (*str > 31 && *str < 127)
		write(1, str, 1);
	else
		write(1, ".", 1);
	if (size > 1)
		end(str + 1, size - 1);
}

void	mid(char *addr, unsigned int size)
{
	unsigned int	i;

	i = 0;
	while (i < 16)
	{
		if (i < size)
			to_hex(addr[i]);
		else
			write(1, "  ", 2);
		if (i % 2)
			write(1, " ", 1);
		i++;
	}
}

void	deb(unsigned long long addr, int n)
{
	if (n > 0)
		deb(addr / 256, n - 1);
	to_hex(addr % 256);
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	int				i;
	unsigned int	j;
	unsigned int	k;

	i = size;
	k = 0;
	while (i > 0)
	{
		if (i >= 16)
			j = 16;
		else
			j = i;
		deb((unsigned long long)(addr) + 16 * k, 7);
		write(1, ": ", 2);
		mid(addr + 16 * k, j);
		end(addr + 16 * k, j);
		write(1, "\n", 1);
		i -= 16;
		k++;
	}
	return (addr);
}
