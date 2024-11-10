/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tedcarpi <tedcarpi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 09:57:24 by tedcarpi          #+#    #+#             */
/*   Updated: 2024/11/10 11:19:53 by tedcarpi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*res;
	size_t	i;
	size_t	j;

	i = ft_strlen(s1);
	res = ft_calloc(i + ft_strlen(s2) + 1, sizeof(char));
	if (res == NULL)
		return (NULL);
	ft_memcpy(res, s1, i);
	j = 0;
	while (j < ft_strlen(s2))
	{
		res[i + j] = s2[j];
		j++;
	}
	return (res);
}
