/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tedcarpi <tedcarpi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 08:17:31 by tedcarpi          #+#    #+#             */
/*   Updated: 2024/11/09 14:25:06 by tedcarpi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	countwords(char const *s, char c)
{
	size_t	i;
	size_t	count;
	
	i = 0;
	count = 0;
	if (s[i] != c && s[i] != '\0')
		count++;
	while (s[i])
	{
		if (s[i] == c && s[i + 1] != c && s[i + 1] != '\0')
			count++;
		i++;
	}
	return (count);
}

size_t	lenword(char const *s, char c, size_t index)
{
	size_t	i;
	
	i = 0;
	while (s[index + i] && s[index + i] !=c)
		i++;
	return (i);
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	x;
	char	**res;

	i = 0;
	x = 0;
	res = (char **) malloc((sizeof(char *) * (countwords(s, c) + 1)));
	if (res == NULL)
		return (NULL);
	while (s[i] && i < ft_strlen(s))
	{
		while (s[i] == c)
			i++;
		res[x] = (char *) malloc(sizeof(char) * (lenword(s, c, i) + 1));
		if (res == NULL)
		{}
		res[x] = ft_substr(s, i, lenword);
		x++;
		while (s[i] != c && i < ft_strlen(s))
			i++;
	}
	return (res);
}
