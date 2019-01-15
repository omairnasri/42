#include <stdio.h>

int ft_atoi(char *strNum)
{
	int i;
	int sign;
	int num;

	i = 0;
	sign = 1; 
	num = 0;
	if(strNum[0] == '-')
	{
		sign = -1;
		i++;
	}
	while(strNum[i] != '\0')
	{
		num = (num * 10) + (strNum[i] - '0');
		i++;
	}
	return num * sign;
}

int main()
{
	char strNum[] = "-3434";
	printf("%d\n", ft_atoi(strNum));

	return 0;
}
