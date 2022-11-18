/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsoares- <nsoares-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 15:43:26 by nsoares-          #+#    #+#             */
/*   Updated: 2022/11/18 17:20:03 by nsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
    t_list *last;
    
    if (*lst)
    {
        if (lst != NULL)
            *lst = new;
        else
        {
            last = ft_lstlast(*(lst));
            last->next = new;
        }
    }
}

/*int main()
{
	t_list *head;
	if(!(head = malloc(sizeof(t_list))))
		return 0;

	head->content = (char *)"olah";
	head->next = NULL;

	t_list *new;
	if(!(new = malloc(sizeof(t_list))))
		return 0;

	new->content = (char *)"adeus";
	new->next = NULL;

	printf("\nHead -> %s\n", (char *)head->content);

	ft_lstadd_back(&head, new);

	printf("Head -> %s\n", (char *)head->content);
}*/