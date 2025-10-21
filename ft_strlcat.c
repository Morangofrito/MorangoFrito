#include <stdio.h>
//#include <unistd.h>
//#include <string.h>
size_t		ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	int	i;
	int	j;
	size_t	k;

	i = 0;
	j = 0;
	k = 0;
	while (src[i] != '\0')
		i++;
	while (dst[j] != '\0')
		j++;
	if (j >= dstsize)
		return (j + i);
	if (dstsize > (j + i))
		while (src[k] != '\0' && (j + k + 1) < dstsize)
		{
			dst[j + k] = src[k];
			k++;
		}
		dst[j + k] = '\0';
	return (j + i);
	
}

/* int main()
{
	char dst[100] = "hello big fat bro";
	char src[100] = "hey small tiny bro";
	size_t dstsize = 50;
	size_t resultado;

	resultado = ft_strlcat(dst, src, dstsize);
	printf("Concatenated string: %s\n", dst);
	printf("Tamanho retornado: %zu\n", resultado);
	return (0);
}
*/
	

