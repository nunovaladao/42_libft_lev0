/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsoares- <nsoares-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 16:44:47 by nsoares-          #+#    #+#             */
/*   Updated: 2022/11/06 17:12:10 by nsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*dest;

	dest = (char *)malloc(sizeof(char) * (ft_strlen(s1) + 1));
	if (dest == NULL)
		return (NULL);
	ft_memcpy(dest, s1, ft_strlen(s1) + 1);
	return (dest);
}

/*int main()
{
    char *str = "Nuno";
    char *result;
    result = ft_strdup(str);
    
    printf("The string: %s", result);
    return 0;
}*/
