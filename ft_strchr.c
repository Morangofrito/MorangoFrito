/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pauloalv <pauloalv@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 18:06:26 by pauloalv          #+#    #+#             */
/*   Updated: 2025/11/08 20:11:02 by pauloalv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s || (char)c == '\0')
	{
		if (*s == (char)c)
		{
			return ((char *)s);
		}
		s++;
	}
	return (NULL);
}
/*
int main()
{
	char *s = "teste";
	int c = 1024;
	
	char *result = ft_strchr(s, c);
	if (result != NULL)
	{
		printf("%c\n", *result);
	}
	else
	{
		printf("char not found\n");
	}
	return 0;
}*/
