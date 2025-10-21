/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pauloalv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 21:17:00 by pauloalv          #+#    #+#             */
/*   Updated: 2025/10/18 21:42:12 by pauloalv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char *ft_strchr(const char *s, int c)
{
	while (*s || c == '\0')
	{
		if (*s == (char)c)
		{
			return (char *)s;
		}
		s++;
	}
	return (NULL);
}

int main()
{
	char *s = "hedsdllo";
	char c = 'd';
	
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
}
