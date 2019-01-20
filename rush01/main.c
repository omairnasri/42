#include <unistd.h>
#include <stdio.h>

void print(char che);

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_putstr(char *str)
{
	int i = 0;

	while(str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

int main(int argc, char *argv[])
{
	char line1[10];
	char line2[10];
	char line3[10];
	char line4[10];
	char line5[10];
	char line6[10];
	char line7[10];
	char line8[10];
	char line9[10];
	int i = 0;
	int outer = 1;
	int inner = 0;

	// Count the number of arguments(digits) entered for each paramter.

	while(outer < argc)
	{
		inner = 0;

		while(argv[outer][inner] != '\0')
		{	
			if(inner > 9)
			{
				ft_putstr("Error! Too many digits/args.");
				return (0);
			}
			inner++;
		}
		
		outer++;
	}

	// < 17 chars ==> error

	// Print the given digits. 
	outer = 1;
	inner = 0;

	while(outer < argc)
	{
		inner = 0;

		while(argv[outer][inner] != '\0')
		{
			if((argv[outer][inner] >= '0' && argv[outer][inner] <= '9') || argv[outer][inner] == '.')
				ft_putchar(argv[outer][inner]);
			else
			{
				ft_putstr("Error! Too many digits in one row.");
				return (0);
			}
			inner++;
		}

		outer++;

		ft_putchar('\n');
	}

	ft_putstr("Program Done.\n");

	return (0);
}

















