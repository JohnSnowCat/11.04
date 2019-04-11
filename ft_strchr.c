#include <stdio.h>
#include <string.h>

char *ft_strchr(const char *s, int c)
{
	int i;
			// не используем приведение к unsigned char!!!
	i = 0;
	while (s[i] != c)
	{
		if (s[i] == '\0')
			return (NULL);
		i++;
	}
	return (char *)(s+i);
	}

int main()
{
	char str[] = "0123456789";
	char c = '\0';
	char *s;
	char *mys;

	s = strchr(str, c);
	printf("funcoutput: %s\n", s);
	mys = ft_strchr(str, c);
	printf("myfunc: %s\n", mys);
	return(0);
}
