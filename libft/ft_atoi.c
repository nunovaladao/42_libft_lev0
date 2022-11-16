/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsoares- <nsoares-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 11:30:16 by nsoares-          #+#    #+#             */
/*   Updated: 2022/11/16 11:20:33 by nsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	s;
	int	res;
	int	i;

	i = 0;
	res = 0;
	s = 1;
	while (str[i] == ' ' || (str[i] >= '\t' && str[i] <= '\r'))
		++i;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			s *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10 + (str[i] - '0');
		i++;
	}
	return (res * s);
}

/*int main()
{
    printf("%d\n", ft_atoi("-+-47"));
    return 0;
}*/
