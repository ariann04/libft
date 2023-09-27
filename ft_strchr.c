/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblagoev <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 16:58:02 by tblagoev          #+#    #+#             */
/*   Updated: 2023/09/25 20:06:29 by tblagoev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if	(*s == c)
			return ((char *)s);
		s++;
	}
	return (NULL);
}

int	main()
{
	char  array[] = "";
	int	a = 'v';

	printf("%s\n", ft_strchr(array, a));
	printf("%s", strchr(array, a));
	return (0);
}
