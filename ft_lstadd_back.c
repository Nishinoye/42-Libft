/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tedcarpi <tedcarpi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 15:22:26 by tedcarpi          #+#    #+#             */
/*   Updated: 2024/11/13 15:50:19 by tedcarpi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//

#include "libft.h"

void ft_lstadd_back(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	while (*lst->next != NULL)
		lst = *lst->next;
	
}