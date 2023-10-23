/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblagoev <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 20:20:15 by tblagoev          #+#    #+#             */
/*   Updated: 2023/10/11 03:40:42 by ls               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

char	*ft_strdup(const char *s1)
{
	size_t	len;
	char	*duplicate;

	len = ft_strlen(s1);
	duplicate = (char *)malloc(len + 1);
	if (s1 == NULL)
		return (NULL);
	if (duplicate == NULL)
		return (NULL);
	memcpy(duplicate, s1, len);
	duplicate[len] = '\0';
	return (duplicate);
}

/*int main()
{
    const char *original = "Hola, mundo!";
    char *duplicado = ft_strdup(original);

    if (duplicado != NULL)
	{
        printf("Original: %s\n", original);
        printf("Duplicado: %s\n", duplicado);

        // Liberamos la memoria del duplicado
        free(duplicado);
    } else
	{
        perror("Error al duplicar la cadena.");
        return 1;
    }

    return 0;
}*/
