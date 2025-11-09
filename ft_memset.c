/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pauloalv <pauloalv@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 01:55:00 by pauloalv          #+#    #+#             */
/*   Updated: 2025/11/08 20:31:50 by pauloalv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include <unistd.h>
#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*temp;

	temp = (unsigned char *) b;
	while (len > 0)
	{
		(*temp++) = (unsigned char) c;
		len--;
	}
	return (b);
}
/*
int main()
{
	int c = 'a';
	size_t len;
	char buffer[10] = "hello";
	ft_memset(buffer, c, 5);
	printf("%s\n", buffer);
}
*/
