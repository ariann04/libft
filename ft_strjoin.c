/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblagoev <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 17:49:57 by tblagoev          #+#    #+#             */
/*   Updated: 2023/09/27 19:52:44 by tblagoev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
  char	*newstr = malloc((ft_strlen(s1) + ft_strlen(s2) + 1) * sizeof(char));

  if (!newstr)
	  return (NULL);

  newstr[i] = '\0';
  return (newstr);
}

int	main()
{
	char	array[] = "Hola";
	char	array1[] = ", mundo";

	printf("%s", ft_strjoin(array, array1));
	return (0);
}
