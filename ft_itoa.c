/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tedcarpi <tedcarpi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 16:20:30 by tedcarpi          #+#    #+#             */
/*   Updated: 2024/11/09 16:58:11 by tedcarpi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	lennbr(n)
{
	size_t	i;
	
	i = 0;
	if (n < 0)
		n = n * -1;
	if (n >= 0)
		i = 1;
	while (n > 9)
	{
		i++;
		n = n / 10;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char	*res;
	size_t	i;
	
	i = 0;
	res = (char *) malloc(sizeof(char) * (lennbr(n) + 1));
	if (n < 0)
	{
		n = n 
	}
	if (n < 10)
		res[] = n + 48;
	return (res);
}

int	main()
{
	char	*res;
	
	res = ft_itoa(2);
	printf("%s", res);
}