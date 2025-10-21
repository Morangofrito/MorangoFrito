#include <stdio.h>
#include <unistd.h>

size_t		ft_strlen(const char *s)
{
	if (s == 0) return 0;
	int	i;

	i = 0;
	while (s[i] != '\0')
	i++;
	return i;
}

int main()
{
	printf("%zu\n", ft_strlen("mundo"));
	return (0);
}
