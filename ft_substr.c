/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tedcarpi <tedcarpi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 09:30:04 by tedcarpi          #+#    #+#             */
/*   Updated: 2024/11/09 14:54:01 by tedcarpi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*res;
	unsigned int	i;

	i = 0;
	if (s[i] == '\0')
		return (NULL);
	if (start >= ft_strlen(s))
		len = 0;
	if (len > ft_strlen(s) - start)
		len = ft_strlen(s) - start;	
	res = malloc(sizeof(char) * (len + 1));
	if (res == NULL)
		return (NULL);
	while ((size_t)i < len && s[start])
	{
		res[i] = s[start];
		start++;
		i++;
	}
	res[i] = '\0';
	return (res);
}
