/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pauloalv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 23:11:54 by pauloalv          #+#    #+#             */
/*   Updated: 2025/10/16 23:15:09 by pauloalv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void *ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char *dstp;
	unsigned char *srcp;

	if (src == NULL && dst == NULL)
		return (dst);

	dstp = (unsigned char *) dst;
	srcp = (unsigned char *) src;
	
	while (n > 0)
	{
		*(dstp++) = *(srcp++);
		n--;
	}
	return (dst);
}

/*int main()
{


	char dst[10];
	char src[] = "hello";
	size_t n = 5;

	printf("%s\n", (unsigned char *)ft_memcpy(dst, src, n));
	return (0);
}
*/
