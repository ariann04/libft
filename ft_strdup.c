/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblagoev <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 20:20:15 by tblagoev          #+#    #+#             */
/*   Updated: 2023/09/25 21:37:43 by tblagoev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

char	*ft_strdup(const char *s1)
{
	if (s1 == NULL)
		return (NULL);
	size_t len = ft_strlen(s1);
	char	*duplicate = (char *)malloc(len + 1);
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
