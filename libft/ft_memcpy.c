/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsoares- <nsoares-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 11:00:15 by nsoares-          #+#    #+#             */
/*   Updated: 2022/11/05 12:50:14 by nsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;

	if (!dest && !src)
		return (0);
	i = 0;
	while (i < n)
	{
		((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
		i++;
	}
	return (dest);
}

/*#include <string.h>
int main()
{
    const char src[50] = "Nuno";
    char dest[50];

    strcpy(dest, "teste");
    
    printf("Agora memcpy dest = %s\n", dest);
    ft_memcpy(dest, src, ft_strlen(src)+1);
    printf("Antes memcpy dest = %s\n", dest);
}*/
