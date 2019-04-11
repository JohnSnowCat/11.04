#include <stdio.h>
#include <string.h>

char *ft_strrchr(const char *s, int c)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	i++;
	while (i > 0)
	{
		if (s[i] == c)
			return ((char *)s+i);
		i--;
	}
	return(NULL);
}

int main(int ac, char **av)
{
//        char str[] = "0123456678922342342344144411421";
//        int c = '\0';
        char *s;
        char *mys;
//	int *i;

//	i = (int *)av[2];
	if (ac == 3)
        s = strrchr(av[1], (av[2][0]));
        printf("funcoutput: %s\n", s);
        mys = ft_strrchr(av[1], (av[2][0]));
        printf("myfunc: %s\n", mys);
        return(0);
}
