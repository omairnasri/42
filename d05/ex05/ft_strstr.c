 #include <stdio.h>

 char *ft_strstr(char *str, char *to_find)
 {
 	int i = 0;
	int m = 0;
	char found[5] = "";

 		while(str[i] != '\0')
 		{
 			if(str[i] == to_find[m])
 				{
 					found[m] = str[i];
 					m++;
 				}
 			i++;
 		}

 	i = 0;

	// Verify the needle isnt incorrect. -- Ascii 127 == blank. 
	// Pass check to another verify function by passing *pointer mem address of to_find and sfound. 

 	while(to_find[i] != '\0')	
 	{
 		printf("While: found[%d] = %c --- to_find[%d] = %c \n",i, found[i], i , to_find[i]);
 		if(found[i] != to_find[i])
 			{
 				m = 0;
 				while(found[m] != '\0')
 				{
 					found[m] = 127;
 					m++;
 				}
 			}
 		i++;
 	}

 	printf("End of program. Needle: %s\n", found);

 	return found;
 }

 int main()
 {
 	char str[] = "The sku sky is blu blo blue."	;
 	char to_find[] = "blue";

 	printf("Needle: %s", ft_strstr(str, to_find));
 	// Issue printing value returned by function. 

 	return 0;
 }