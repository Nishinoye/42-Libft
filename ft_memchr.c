/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tedcarpi <tedcarpi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 08:48:05 by tedcarpi          #+#    #+#             */
/*   Updated: 2024/11/07 11:25:27 by tedcarpi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *block, int src, size_t size)
{
	size_t			i;
	unsigned char	*ptr;
	unsigned char	c;

	i = 0;
	ptr = (unsigned char *)block;
	c = (unsigned char)src;
	while (i < size)
	{
		if (ptr[i] == c)
			return ((void *)&ptr[i]);
		i++;
	}
	return (NULL);
}
