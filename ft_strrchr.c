/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pauloalv <pauloalv@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 18:01:47 by pauloalv          #+#    #+#             */
/*   Updated: 2025/11/08 20:24:04 by pauloalv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include <unistd.h>
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*ultimo;

	ultimo = NULL;
	while (*s != '\0')
	{
		if (*s == (char)c)
			ultimo = (char *)s;
		s++;
	}
	if (*s == (char)c)
		ultimo = (char *)s;
	return (ultimo);
}

/*int main()
{
	const char s[20] = "hllo";
	int c = 'e';
	char *result;

	result = ft_strrchr(s, c);
	if (result != NULL)
		printf("última ocorrencia de '%c' está em %s\n", c, result);
	else
		printf("Carácter '%c' nao encontrado\n", c);

	return 0;
}*/
