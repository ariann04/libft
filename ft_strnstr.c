/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblagoev <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 18:09:51 by tblagoev          #+#    #+#             */
/*   Updated: 2023/09/20 22:04:52 by tblagoev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	if (!haystack && !len)
		return (NULL);
	if (*needle == '\0')
		return ((char *)haystack);
	while (len--)
	{
		if (*haystack == *needle)
		{
			return ((char *)haystack);
		}
		haystack++;
	}
	return (NULL);
}

/*int	main()
{
	char	array1[] = "Tsvetelina";
	char	array2[] = "vete";

	printf("%s", ft_strnstr(array1, array2, 5));
	return (0);
}*/
