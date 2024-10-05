#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_write_combn(char a, char b)
{
	ft_putchar(a);
	ft_putchar(b);
}

void	ft_print_combn(int n)
{
	char a;
	char b;

	a = '0';
	while (a <= '8')
	{
		b = a + 1;
		while (b <= '9')
		{
			ft_write_combn(a, b);
			if (!(a == '8' && b == '9'))
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
			b++;
		}
		a++;
	}
}

int		main(void)
{
	ft_print_combn(42);
}
