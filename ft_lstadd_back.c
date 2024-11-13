/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tedcarpi <tedcarpi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 15:22:26 by tedcarpi          #+#    #+#             */
/*   Updated: 2024/11/13 16:44:47 by tedcarpi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//

#include "libft.h"

void ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*i;
	
	if (!lst || !new)
		return ;
	i = ft_lstlast((*lst));
	(*lst)->next = new;
	new->next = NULL;
}