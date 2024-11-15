/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tedcarpi <tedcarpi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 17:48:57 by tedcarpi          #+#    #+#             */
/*   Updated: 2024/11/15 16:36:01 by tedcarpi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*swap;
	t_list	*res;

	if (!lst)
		return (NULL);
	swap = lst;
	res = NULL;
	while (swap)
	{
		new = ft_lstnew(f(swap->content));
		if (!new)
		{
			ft_lstclear(&new, del);
			ft_lstclear(&res, del);
			ft_lstclear(&swap, del);
		}
		ft_lstadd_back(&res, new);
		swap = swap->next;
	}
	ft_lstclear(&swap, del);
	return (res);
}
