/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsoares- <nsoares-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 21:41:42 by nsoares-          #+#    #+#             */
/*   Updated: 2022/11/16 11:14:35 by nsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	b;
	size_t	l;

	if ((!big || !little) && len == 0)
		return (NULL);
	b = 0;
	l = 0;
	if (little[l] == '\0')
		return ((char *)big);
	while (big[b] != '\0' && b < len)
	{
		while (big[b + l] == little[l] && big[b + l] != '\0' \
				&& (b + l) < len && little[l] != '\0')
		{
			if (little[l + 1] == '\0')
				return ((char *)&big[b]);
			l++;
		}
		b++;
	}
	return (NULL);
}

/*#include <bsd/string.h>
int main()
{
    	const char *big = "lorem ipsum dolor sit amet";
    	const char *little = "dol";
    
    	printf("%s\n", ft_strnstr(big, little, 30));
    	printf("%s\n", strnstr(big, little, 30));
}*/
