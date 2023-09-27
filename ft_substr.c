/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblagoev <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 21:37:59 by tblagoev          #+#    #+#             */
/*   Updated: 2023/09/25 23:56:54 by tblagoev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t i;
	char	*substring = malloc((len + 1) * sizeof(char));

	i = 0;
	if (substring == NULL)
		return (NULL);
	while (i < len && s[start + i])
	{
		substring[i] = s[start + i];
		i++;
	}
	substring[i] = '\0';
	return (substring);
}

/*int	main()
{
	char	array[] = "Hola, mundo";

	printf("%s", ft_substr(array, 6, 3));
	return (0);
}*/
