/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pauloalv <pauloalv@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 17:55:25 by pauloalv          #+#    #+#             */
/*   Updated: 2025/11/08 21:25:18 by pauloalv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*srcp;
	char	*dstp;
	size_t	i;

	if (!dst && !src)
		return (NULL);
	dstp = (char *)dst;
	srcp = (char *)src;
	i = 0;
	if (srcp < dstp)
		while (len-- > 0)
			dstp[len] = srcp[len];
	else
	{
		while (i < len)
		{
			dstp[i] = srcp[i];
			i++;
		}
	}
	return (dst);
}

/* int main()
{
	char	dst[130] = "hello222i1111";
	char	src[] = "worl";
	int len = 4;

	printf("Before: dst = %s, src = %s\n", dst, src);
	printf("%s\n", (char *)ft_memmove(dst, src, len));
	return (0);	
}*/
