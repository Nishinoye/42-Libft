/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tedcarpi <tedcarpi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 09:11:13 by tedcarpi          #+#    #+#             */
/*   Updated: 2024/11/10 11:58:51 by tedcarpi         ###   ########.fr       */
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
	res = (char *) malloc(sizeof(char) * (len + 1));
	if (!res)
		return (NULL);
	//if (res == 0)
		
	return ("fghjfjghfhg");
}

/*int	main()
{
	printf("%d\n", nblen(5));
	printf("%d\n", nblen(-5));
	printf("%d\n", nblen(0));
	printf("%d\n", nblen(555));
	printf("%d\n", nblen(-555));
	printf("%d\n", nblen(INT_MIN));
	printf("%d\n", nblen(INT_MAX));
}*/