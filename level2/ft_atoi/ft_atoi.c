/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndavid <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/20 12:07:55 by ndavid            #+#    #+#             */
/*   Updated: 2015/09/20 12:29:55 by ndavid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_atoi(char *str)
{
	int sign;
	int value;

	sign = 1;
	value = 0;
	while (*str == ' ' || *str == '\t')
		str++;
	while  (*str == '-' || *str == '+')
	{	
		if (*str == '-')
			sign = -sign;
		++str;
	}	
	while (*str >= '0' && *str <= '9')
	{
		value *= 10;
		value += (*str++ - '0');
	}
	return (value * sign);
}

int		main(void)
{
	printf("%d", ft_atoi("   ---4445546"));
	return (0);
}
