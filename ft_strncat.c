#include <stdio.h>
#include <string.h>

char *ft_strncat(char *dest, char *src, size_t n)
{
	size_t i;
	size_t len;
	
	len = strlen(dest);
	while (src[i] != '\0' && i < n)
	{
		dest[len+i] = src[i];
		i++;
	}	
	dest[len+i] = '\0';
	return(dest);
}
