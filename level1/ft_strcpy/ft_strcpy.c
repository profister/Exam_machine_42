/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndavid <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/19 18:58:29 by ndavid            #+#    #+#             */
/*   Updated: 2015/09/20 10:36:58 by ndavid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void		ft_putchar(char c)
{
	write(1, &c, 1);
}

void		ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

char		*ft_strcpy(char *s1, char *s2)
{
	int x;

	x = 0;
	while (s2[x] != '\0')
	{
		s1[x] = s2[x];
		x++;
	}
	s1[x] = '\0';
	return (s1);
}

int		main(int argc, char **argv)
{
	ft_putstr(ft_strcpy(argv[1], argv[2]));
}

