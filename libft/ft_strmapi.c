/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsoares- <nsoares-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 11:18:12 by nsoares-          #+#    #+#             */
/*   Updated: 2022/11/10 22:44:32 by nsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*string;
	size_t	i;

	if (!s || !f)
		return (NULL);
	string = ft_strdup(s);
	if (string == NULL)
		return (NULL);
	i = 0;
	while (string[i] != '\0')
	{
		string[i] = f(i, string[i]);
		i++;
	}
	string[i] = '\0';
	return (string);
}

/*char function(unsigned int n, char c)
{
    char str;
    
    n = 0;
    str = c + n;
    return (str);
}

int main()
{
    char const str1[] = "test";
	char* str2 = ft_strmapi(str1, function);
	printf("%s\n", str2);
}*/
