#include <stdio.h>

void print_bits(unsigned int x)
{
    int i;
    for(i=2*sizeof(int)-1; i>=0; i--) {

        (
			x & (1 << i)) ? putchar('1') : putchar('0');
    }
    printf("\n");
}

void rev_bit(unsigned int x)
{
    int i;

    for(i = 7; i >= 0; i--) 
	{
        (x & (1 << i)) ? putchar('1') : putchar('0');
    }
    printf("\n");
}


void	*ft_print_memory(void *addr, unsigned int size);

int	main(void)
{

// extra shift needed at end


	int a;
	int b;

	a = 10;
	b = 0;

	// |
	// &
	// ~
	// ^
	// !


	print_bits( ~a );
	// print_bits( a << 7);
	//print_bits( a >> 4 | a << 4);
	//print_bits( !a );
	//print_bits( a );
	//rev_bit(a);




	return (0);
}
