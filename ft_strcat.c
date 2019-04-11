#include <string.h>
#include <stdio.h>

char *ft_strcat(char *dest, const char *src)
{
	int i;
	int len;

	i = 0;
	len = strlen(dest);
	while (src[i] != '\0')
	{
		dest[len+i] = src[i];
		i++;
	}
	dest[len+i] = '\0';
	return (dest);
}

/*int	main()
{
		char src[] = "Hello";
		char dest[] = "Kitty";
		char dest2[] = "Kitty";
		ft_strcat(dest, src);
		printf("my func: %s\n", dest);
		strcat(dest2, src);
		printf("liba func %s\n", dest2);
		return(0);
} */
