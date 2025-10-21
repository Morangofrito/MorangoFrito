#include <unistd.h>
#include <stdio.h>

char	*ft_strchr(const char *s, int c)
{
	
	while (s[c] != '\0')
	{
		if (s == letra)
			return (s);
		else
			c++;
	}
	return (NULL);
}

int main()
{
	const char s = "vidavida";
	int c = 's';
	char resultado;

	resultado = *ft_strchr(s, c);
	printf("%s\n", *ft_strchr(s, c));
	return (0);
}
