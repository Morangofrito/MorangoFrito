/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pauloalv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 22:09:17 by pauloalv          #+#    #+#             */
/*   Updated: 2025/10/19 03:01:41 by pauloalv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

size_t ft_strlcpy (char *dst, const char *src, size_t size)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (src[j] != '\0')
		j++;
	while (src[i] != '\0' && i < size - 1)
	{
		dst[i] = src[i];
		i++;
	}
	return (j);
}

int main()
{	
	char dst[42] = "";
	char src[] = "jell00";
	size_t resultado;
	size_t size = 5;

	resultado = ft_strlcpy(dst, src, size);
	printf("%s\n", dst);
	printf("%zu\n", resultado);
	return (0);
}
