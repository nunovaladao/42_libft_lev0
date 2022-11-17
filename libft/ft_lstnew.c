/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsoares- <nsoares-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 13:30:22 by nsoares-          #+#    #+#             */
/*   Updated: 2022/11/17 14:54:16 by nsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

t_list *ft_lstnew(void *content)
{
    t_list *dest;
    
    dest = malloc(sizeof(content));
    if (!dest)
        return (NULL);
    
}