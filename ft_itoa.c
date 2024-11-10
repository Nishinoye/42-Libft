/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tedcarpi <tedcarpi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 09:11:13 by tedcarpi          #+#    #+#             */
/*   Updated: 2024/11/10 14:06:32 by tedcarpi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	nblen(int n)
{
	int	i;

	i = 0;
	if (n == 0)
		return (1);
	if (n == INT_MIN)
		return (11);
	if (n < 0)
	{
		i++;
		n *= -1;
	}
	while (n > 9)
	{
		i++;
		n /= 10;
	}
	return (i + 1);
}

char	*ft_itoa(int n)
{
	char	*res;
	int		len;
	
	if (n == INT_MIN)
	len = nblen(n);
	res = (char *) ft_calloc(len + 1, sizeof(char));
	if (!res)
		return (NULL);
	if (n < 0)
	{	n *= -1;
		res[0] = 45;
	}
	while (n >  9)
	{
		len --;
		res[len] = n % 10 + 48;
		n /= 10;
	}
	res[len - 1] = n + 48;
	return (res);
}

int	main()
{
	char	*res;
	
	res = ft_itoa(0);
	printf("%s\n", res);
	res = ft_itoa(5);
	printf("%s\n", res);
	res = ft_itoa(-5);
	printf("%s\n", res);
	res = ft_itoa(55555);
	printf("%s\n", res);
	res = ft_itoa(-55555);
	printf("%s\n", res);
	res = ft_itoa(INT_MAX);
	printf("%s\n", res);
	res = ft_itoa(INT_MIN);
	printf("%s\n", res);
}