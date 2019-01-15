#include <stdio.h>

char *ft_strcpy(char *dest, char *src)
{
	int i = 0;

	while(src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
}

int main()
{
	char src[] = "This is omair.";
	char dest[15];

	ft_strcpy(dest, src);

	printf("%s\n", dest);
	return 0;
}