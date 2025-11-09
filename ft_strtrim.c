/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pauloalv <pauloalv@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 05:15:42 by pauloalv          #+#    #+#             */
/*   Updated: 2025/11/09 00:48:41 by pauloalv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	setcheck(char c, const char *set)
{
	size_t	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

static int	trimlen(char const *set, char const *s1)
{
	int	i;
	int	delete;

	i = 0;
	delete = 0;
	while (s1[i] && setcheck(s1[i], set))
	{
		i++;
		delete++;
	}
	if ((int)ft_strlen(s1) == delete)
		return (0);
	i = ft_strlen(s1) - 1;
	while (s1[i] && setcheck(s1[i], set))
	{
		i--;
		delete++;
	}
	return (ft_strlen(s1) - delete);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		start;
	int		end;
	int		len;
	char	*res;
	size_t	i;

	if (!s1[0])
		return (ft_strdup(""));
	start = 0;
	end = ft_strlen(s1) - 1;
	while (s1[start] && setcheck(s1[start], set))
		start++;
	while (end >= start && setcheck(s1[end], set))
		end--;
	len = trimlen(set, s1);
	res = malloc(sizeof(char) * (len + 1));
	if (!res)
		return (NULL);
	i = 0;
	while (start <= end)
		res[i++] = s1[start++];
	res[i] = '\0';
	return (res);
}

/*#include <stdio.h>
int	main(void)
{
	char s1[] = "111111";
	char *set = "1";
	char *res = ft_strtrim(s1, set);

	printf("%s\n", res);
	return (0);
}*/
/*
#include <string.h>

int main(void)
{
	printf("%s\n", ft_strtrim("   xxxtripouille", " x"));
	printf("%s\n", ft_strtrim("tripouille   xxx", " x"));
	printf("%s\n", ft_strtrim("   xxxtripouille   xxx", " x"));
	printf("%s\n", ft_strtrim("   xxx   xxx", " x"));
	printf("%s\n", ft_strtrim("", "123"));
	printf("%s\n", ft_strtrim("123", ""));
	printf("%s\n", ft_strtrim("", ""));
	printf("%s\n", ft_strtrim("abcdba", "acb"));

	return (0);
}*/
