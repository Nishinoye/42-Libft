/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tedcarpi <tedcarpi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 16:20:30 by tedcarpi          #+#    #+#             */
/*   Updated: 2024/11/09 17:18:20 by tedcarpi         ###   ########.fr       */
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
		i++;;
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
	if (n < 10)
		res[i] = n + 48;
	else if (n > 9)
	{
		while (n > 9)
		{
			res[lennbr(n)] = n % 10;
			n = n / 10;
		}
	}
	res[lennbr(n) + 1] = '\0';
	return (res);
}

int	main()
{
	char	*res;
	
	res = ft_itoa(19);
	printf("%s", res);
}