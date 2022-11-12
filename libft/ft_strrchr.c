/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsoares- <nsoares-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 09:50:04 by nsoares-          #+#    #+#             */
/*   Updated: 2022/11/07 18:07:53 by nsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char	*a;
	int			i;

	a = s;
	i = ft_strlen(s);
	s = (s + i);
	while (*s != *a && c != *s)
		s--;
	if (c == *s)
		return ((char *)s);
	return (0);
}

/*int	main(void)
{
	const char s[] = "http://www.tutorialspoint.com";
	const char ch = '.';

	printf("%s", strrchr(s, ch));
}*/
