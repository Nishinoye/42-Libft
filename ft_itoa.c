/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tedcarpi <tedcarpi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 09:11:13 by tedcarpi          #+#    #+#             */
/*   Updated: 2024/11/10 13:53:47 by tedcarpi         ###   ########.fr       */
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
	
	len = nblen(n);
	res = (char *) ft_calloc(len + 1, sizeof(char));
	if (!res)
		return (NULL);
	if (n < 0)
		n *= -1;
	return (res);
}

int	main()
{
	char	*res;
	
	res = ft_itoa(0);
	printf("%s\n", res);
	printf("%d\n", nblen(5));
	printf("%d\n", nblen(-5));
	printf("%d\n", nblen(0));
	printf("%d\n", nblen(555));
	printf("%d\n", nblen(-555));
	printf("%d\n", nblen(INT_MIN));
	printf("%d\n", nblen(INT_MAX));
}