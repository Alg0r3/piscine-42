#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putaddr(void *addr)
{		
	
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	(void) size;

	ft_putaddr(addr);
}

#include <stdio.h>
int		main(void)
{
	char str[] = "Ceci est un test :D Pas sûr qu'il fonctionne par contre lol";
	void *addr;
	unsigned int size;
	
	addr = &str;
	size = 59;
	ft_print_memory(addr, size);
	printf("\n printf : %p\n", addr);
	return (0);
}
