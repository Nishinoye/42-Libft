/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tedcarpi <tedcarpi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 08:54:48 by tedcarpi          #+#    #+#             */
/*   Updated: 2024/11/13 17:24:52 by tedcarpi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Ajoute l'element content dans la list new en premiere position

#include "libft.h"

t_list	*ft_lstnew(int ex)
{
	t_list	*new;

	new = malloc(sizeof(t_list));
	if (!new)
		return (NULL);
	new->content = ex;
	new->next = NULL;
	return (new);
}
