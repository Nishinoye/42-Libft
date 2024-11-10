/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tedcarpi <tedcarpi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 09:04:40 by tedcarpi          #+#    #+#             */
/*   Updated: 2024/11/10 09:43:48 by tedcarpi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	char	*res;

	res = (char *) ft_calloc(ft_strlen(src) + 1, sizeof(char));
	if (res == NULL)
		return (NULL);
	ft_memcpy(res, src, ft_strlen(src));
	return (res);
}
