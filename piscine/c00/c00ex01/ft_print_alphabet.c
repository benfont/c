#include <unistd.h>

void	ft_print_alphabet(void)
{
	int	count;

	count = 97;
	while (count <= 122)
	{
		write(1, &count, 1);
		count++;
		write(1, "\n", 1);
	}
}

int	main(void)
{
	ft_print_alphabet();
	return (0);
}
