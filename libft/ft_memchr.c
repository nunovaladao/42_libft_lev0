/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsoares- <nsoares-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 18:55:57 by nsoares-          #+#    #+#             */
/*   Updated: 2022/11/05 21:18:49 by nsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (((unsigned char *) str)[i] == (unsigned char )c)
			return ((void *)(str + i));
		i++;
	}
	return (0);
}

/*int main()
{
    const char str[] = "test";
    const char ch = 's';
    char *ret;

    ret = ft_memchr(str, ch, ft_strlen(str));

    printf("String after |%c| is - |%s|\n", ch, ret);
}*/
