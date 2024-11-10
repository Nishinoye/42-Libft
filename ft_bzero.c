/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tedcarpi <tedcarpi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 14:41:13 by tedcarpi          #+#    #+#             */
/*   Updated: 2024/11/10 09:47:41 by tedcarpi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Mettre tout les octets a 0 jusqu'a la taille n

#include "libft.h"

void	ft_bzero(void *str, size_t n)
{
	size_t			i;
	unsigned char	*ptr;

	ptr = (unsigned char *) str;
	i = 0;
	while (i < n)
	{
		ptr[i] = '\0';
		i++;
	}
}
