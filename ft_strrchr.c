/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblagoev <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 22:21:06 by tblagoev          #+#    #+#             */
/*   Updated: 2023/09/18 22:59:20 by tblagoev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

char	*ft_strrchr(const char *s, int c)
{
	size_t i;

	i = 0;
	while (s[i])
		i++;
	while (s[--i])
	{
		if (s[i] == c)
			return ((char *)s + i);
	}
	return (NULL);
}

int	main()
{
	printf ("%s\n", ft_strrchr("caracola", 'c'));
	printf ("%s\n", strrchr("caracola", 'c'));
	return (0);
}
