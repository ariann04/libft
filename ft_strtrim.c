/**************************************************************************** */
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

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
    size_t  end;

    if (!s1 || !set)
        return (NULL);
    start = 0;
    while (s1[start] && ft_strchr(set, s1[start]))
            start++;
    end = ft_strlen(s1);
    while (end > start && ft_strchr(set, s1[end - 1]))
            end --;
    return (ft_substr(s1, start, end - start));
}

/*int main()
{
        char    array[] = "xxxHolaxxx";
        char    array1[] = "xxx";

        printf("%s", ft_strtrim(array, array1));
        return (0);
}*/
