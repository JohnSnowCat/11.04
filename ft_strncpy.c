#include <string.h>
#include <stdio.h>

char *ft_strncpy(char *dest, const char *src, size_t n)
{
size_t i;

i = 0;
while (i < n)
{
    if (src[i] != '\0')
    {
        dest[i] = src[i];
        i++;
    }
    else
        while (i < n)
        {
            dest[i] = '\0';
            i++;
        }
}
return(dest);
}

int	main()
{
char src[] = "123456789";
char dest[] = "YYYYYYYY";
size_t n = 3;
ft_strncpy(dest, src, n);
printf("%s\n", dest);
return(0);
}
