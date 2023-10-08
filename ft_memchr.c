/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblagoev <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 15:30:20 by tblagoev          #+#    #+#             */
/*   Updated: 2023/09/18 15:45:46 by tblagoev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
void	*ft_memchr(const void *s, int c, size_t n)
{
    const unsigned char *p = s;
	const unsigned char uc = (unsigned char)c;

    while (n--)
    {
            if (*p == uc)
                    return ((void *)p);
            p++;
    }
    return (0);
}

/*int	main()
{
	printf("%i", )
}*/
