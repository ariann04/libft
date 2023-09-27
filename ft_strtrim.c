/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblagoev <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 18:54:41 by tblagoev          #+#    #+#             */
/*   Updated: 2023/09/27 20:03:55 by tblagoev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libfft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	len;
	size_t 	i;

	len = ft_strlen(s1);
	i = 0;
	while (i != '\0' && len--)
	{
		if (*set == s1[i])
		{

		}
	}
	s1[i] = '\0';
	return (s1 = malloc(len + 1));
}
