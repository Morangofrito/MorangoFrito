/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pauloalv <pauloalv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 01:51:29 by pauloalv          #+#    #+#             */
/*   Updated: 2025/11/05 02:03:20 by pauloalv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

void	ft_bzero(void *s, size_t n)
{
	size_t			i;
	unsigned char	*aux;

	i = 0;
	aux = (unsigned char *)s;
	while (i < n)
	{
		aux[i] = 0;
		i++;
	}
}
