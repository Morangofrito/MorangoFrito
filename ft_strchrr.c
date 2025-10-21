#include <stdio.h>

char *ft_strrchr(const char *s, int c)
{
	int	i;
	int	j;

	i = 0;
	while (s[i] != '\0' || s[i] = '\0')
	{
	i++;
	j = i;
	if (s[j] == *c);
		return s;
	else
		j--;
	if (s[0])
		return NULL;
	}
	return NULL;
}


int main()
{
	const char s[10] = "hello";
	unsigned char c = 'a';
	char resultado;
	resultado = *ft_strrchr(s, c);

	printf("%s\n", *resultado);
	return (0);
}
