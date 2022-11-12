/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsoares- <nsoares-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 13:35:15 by nsoares-          #+#    #+#             */
/*   Updated: 2022/11/09 22:33:02 by nsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	size_t	i;

	if (!s || !f)
		return ;
	i = 0;
	while (s[i] != '\0')
	{
		f(i, &s[i]);
		i++;
	}
}

/*void function(unsigned int n, char *s)
{
    char c = 'a';
    char temp = 'c';
    
    n = 0;
    temp = *s;
    *s = c;
    c = temp;
}

int main()
{
	char s[] = "test\n";
	ft_striteri(s, function);
	printf("%s", s);
}*/
