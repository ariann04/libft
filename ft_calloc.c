/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblagoev <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 18:53:34 by tblagoev          #+#    #+#             */
/*   Updated: 2023/09/25 20:19:49 by tblagoev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

void	*ft_calloc(size_t count, size_t size)
{
	void	*str;

	str = malloc(count * size);
	if (str == '\0')
		return (NULL);
	ft_bzero(str, count * size);
	return (str);
}

int main()
{
    size_t num_elements = 5;
    size_t element_size = sizeof(int);

    // Usamos calloc estándar para asignar memoria e inicializarla
    int *calloc_result = (int *)calloc(num_elements, element_size);

    if (calloc_result == NULL) 
	{
        perror("calloc");
        return 1;
    }

    // Usamos ft_calloc (tu implementación) para hacer lo mismo
    int *ft_calloc_result = (int *)ft_calloc(num_elements, element_size);

    if (ft_calloc_result == NULL) 
	{
        perror("ft_calloc");
        return 1;
    }

    // Comparamos los resultados usando la función memcmp
    int result = memcmp(calloc_result, ft_calloc_result, num_elements * element_size);

    if (result == 0) 
	{
        printf("ft_calloc y calloc producen el mismo resultado.\n");
    } else 
	{
        printf("ft_calloc y calloc NO producen el mismo resultado.\n");
    }

    // Liberamos la memoria asignada por ambas implementaciones
    free(calloc_result);
    free(ft_calloc_result);

    return 0;
}
