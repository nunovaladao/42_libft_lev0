/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsoares- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 11:10:20 by nsoares-          #+#    #+#             */
/*   Updated: 2022/11/07 11:10:23 by nsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*dest;
	size_t	j;

	dest = (char *)malloc(len + 1);
	if (!s || !dest)
		return (0);
	j = 0;
	while (start < ft_strlen(s) && j < len)
		dest[j++] = s[start++];
	dest[j] = '\0';
	return (dest);
}

/*int main()
{
	char src[] = "substr function Implementation";

    	int start = 7;
    	int len = 5;
 
    	char* dest = ft_substr(src, start, len);
 
    	printf("%s\n", dest);
 
    	return 0;
}*/
