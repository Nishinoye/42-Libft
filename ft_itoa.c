/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tedcarpi <tedcarpi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 16:20:30 by tedcarpi          #+#    #+#             */
/*   Updated: 2024/11/09 17:32:57 by tedcarpi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	lennbr(n)
{
	size_t	i;
	
	i = 0;
	if (n < 0)
	{
		n = n * -1;
		i++;
	}
	if (n >= 0 && n < 10)
		i++;;;;;;;;;;
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
	size_t	len;
	
	i = 0;
	len = lennbr(n);
	printf("%zu", len);
	res = (char *) malloc(sizeof(char) * (len + 1));
	if (n == -2147483648)
	{
		res = "-2147483648\0";
		return (res);
	}
	if (n < 0)
	{
		n = n * -1;
		res[0] = 45;
		i++;
	}
	while (n > 9)
	{
		res[lennbr(n)] = n % 10 + 48;
		n = n / 10;
	}
	res[lennbr(n)] = n + 48;
	res[len] = '\0';
	return (res);
}

int	main()
{
	char	*res;
	
	res = ft_itoa(-19986);
	printf("%s", res);
}