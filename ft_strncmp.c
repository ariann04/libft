/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblagoev <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 17:30:21 by tblagoev          #+#    #+#             */
/*   Updated: 2023/09/20 18:09:19 by tblagoev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	return (ft_memcmp(s1, s2, n));
}

int	main()
{
	const char	array1[] = "hola";
	const char	array2[] = "holi";
	printf("%i", ft_strncmp(array1, array2, 10));
	return (0);
}

