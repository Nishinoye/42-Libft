/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tedcarpi <tedcarpi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 16:52:37 by tedcarpi          #+#    #+#             */
/*   Updated: 2024/11/14 17:25:43 by tedcarpi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*n;

	while (*lst)
	{
		n = (*lst)->next;
		del((*lst)->content);
		free(*lst);
		*lst = n;
	}
	*lst = NULL;
}
