/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsoares- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 15:05:16 by nsoares-          #+#    #+#             */
/*   Updated: 2022/11/07 15:05:21 by nsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*result;

	if (!s1)
		return (NULL);
	if (!s2 && s1)
		return ((char *)s1);
	result = malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (result)
	{
		ft_memcpy (result, s1, ft_strlen(s1));
		ft_memcpy (result + ft_strlen(s1), s2, ft_strlen(s2) + 1);
	}
	return (result);
}

/*int main()
{
	printf("%s", ft_strjoin("ft", "_join"));
}*/
