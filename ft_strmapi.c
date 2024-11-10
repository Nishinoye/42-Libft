/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tedcarpi <tedcarpi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 14:52:03 by tedcarpi          #+#    #+#             */
/*   Updated: 2024/11/10 15:06:55 by tedcarpi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*res;
	unsigned int	i;
	
	res = ((char *) ft_calloc(s, sizeof()))
	i = 0;
	f(s[i], i)
}