/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblagoev <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 18:50:48 by tblagoev          #+#    #+#             */
/*   Updated: 2023/09/25 20:48:42 by tblagoev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char		*d;
	const char	*s;

	d = dst;
	s = src;
	while (n--)
		*d++ = *s++;
	return (dst);
}

/*int	main()
{
	char arrayd[] = "hola";
	char arrays[] = "adios";
	void	*ptr;
	const void	*ptr2;

	ptr = &arrayd[0];
	ptr2 = &arrays[0];
	printf ("%s\n", ft_memcpy(ptr, ptr2, 8));
	printf ("%s", memcpy(ptr, ptr2 , 8));
	return (0);
}*/
