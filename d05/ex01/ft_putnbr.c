#include <stdio.h>
void ft_putchar(char c);

void ft_putnbr(int n)
{
	int position = 1;

		while(n / position > 10)
		{
			printf("n / pos: %d", n / position);
			position = position * 10;
		}

		while(position > 0)
		{
			ft_putchar('0' + (n/position));
			ft_putchar('\n');
			
			n = n - ((n/position) * position);

			position /= 10;

			//ft_putchar('0' + n);
		}
}

int main()
{
	ft_putnbr(030);
	return 0;
i}
