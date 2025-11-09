/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pauloalv <pauloalv@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 20:39:40 by pauloalv          #+#    #+#             */
/*   Updated: 2025/11/08 21:29:17 by pauloalv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	a;
	unsigned char	*tmp;

	i = 0;
	tmp = (unsigned char *)s;
	a = (unsigned char)c;
	while (i < n)
	{
		if ((unsigned char)tmp[i] == a)
			return ((void *)&tmp[i]);
		i++;
	}
	return (NULL);
}
