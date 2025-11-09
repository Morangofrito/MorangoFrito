/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pauloalv <pauloalv@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 20:14:36 by pauloalv          #+#    #+#             */
/*   Updated: 2025/11/03 00:03:51 by pauloalv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>
#include <unistd.h>
#include <string.h>

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dst_len;
	size_t	src_len;
	size_t	i;
	size_t	j;

	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	i = dst_len;
	if (dst == src)
		return (0);
	if (dstsize != 0 && i < (dstsize - 1))
	{
		j = 0;
		while (i < (dstsize - 1) && src[j] != '\0')
		{
			dst[i] = src[j];
			i++;
			j++;
		}
		dst[i] = '\0';
	}
	if (dst_len > dstsize)
		return (dstsize + src_len);
	return (dst_len + src_len);
}
/*
int main()
{
	char dst[100] = "pqrst";
	char src[100] = "pqrst";
	size_t dstsize = 4;
	size_t resultado = ft_strlcat(dst, src, dstsize);

	printf("Concatenated string: %s\n", dst);
	printf("Tamanho retornado: %zu\n", resultado);
	return (0);
}*/
