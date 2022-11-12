/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsoares- <nsoares-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 12:57:45 by nsoares-          #+#    #+#             */
/*   Updated: 2022/11/05 18:50:54 by nsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	if (!dest && !src)
		return (NULL);
	if (src < dest)
	{
		while (n)
		{
			--n;
			((unsigned char *)dest)[n] = ((unsigned char *)src)[n];
		}	
	}
	else if (src > dest)
	{
		ft_memcpy(dest, src, n);
	}
	return (dest);
}

/*int main()
{
    char dest[] = "testeeee";
    const char src[]  = "nu";

    printf("Before memmove dest = %s, src = %s\n", dest, src);
    ft_memmove(dest, src, 10);
    printf("After memmove dest = %s, src = %s\n", dest, src);
}*/
