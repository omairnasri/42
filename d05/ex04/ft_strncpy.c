#include <stdio.h>

void ft_strncpy(char *dest, char *src, unsigned int n)
{
	int i = 0;

	while(i < n)
	{
		dest[i] = src[i];
		i++;
	}
}

int main()
{
	char src[] = "This is omair.";
	char dest[15];

	ft_strncpy(dest, src, 6);

	printf("%s\n", dest);
	return 0;
}