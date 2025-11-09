/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pauloalv <pauloalv@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/26 01:05:07 by pauloalv          #+#    #+#             */
/*   Updated: 2025/11/08 21:05:53 by pauloalv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>
#include <unistd.h>
//#include <stdio.h>
#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	size;
	char	*p;

	size = strlen(s) + 1;
	p = malloc(size);
	if (p != NULL)
	{
		memcpy(p, s, size);
	}
	return (p);
}
/*int main()
{
	char s[100] = "hey bro";
	printf("%s\n", ft_strdup(s));
	return (0);
}*/
