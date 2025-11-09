/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pauloalv <pauloalv@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 21:33:53 by pauloalv          #+#    #+#             */
/*   Updated: 2025/11/09 00:23:43 by pauloalv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

char	*ft_strjoin(const char *s1, const char *s2)
{
	size_t	i;
	size_t	j;
	size_t	len_1;
	size_t	len_2;
	char	*res;

	i = 0;
	j = 0;
	len_1 = ft_strlen(s1);
	len_2 = ft_strlen(s2);
	res = (char *)malloc(sizeof(char) * (len_1 + len_2 + 1));
	if (!res)
		return (NULL);
	while (i < len_1)
	{
		res[i] = s1[i];
		i++;
	}
	while (j < len_2)
	{
		res[i + j] = s2[j];
		j++;
	}
	res[i + j] = '\0';
	return (res);
}

/*
int main()
{
	const char *s1 = "hello";
	const char *s2 = "world";
	char *res;

	res = ft_strjoin(s1, s2);
	if (res) 
	{
		printf("resultado: %s\n", res);
		free(res);
	}
	else
	{
		printf("Memory allocation failed\n");
	}
	return (0);
}
*/
