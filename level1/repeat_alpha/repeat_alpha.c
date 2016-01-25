/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndavid <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/20 14:05:56 by ndavid            #+#    #+#             */
/*   Updated: 2015/09/20 17:06:05 by ndavid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void		ft_putchar(char c)
{
	write(1, &c, 1);
}

char		repeat_alpha(char *str)
{
	int i;
	int x;
	int y;

	i = 0;
	x = 0;
	y = 0;	
	if (str[i] >= 'a' && str[i] <= 'z')
	{
		x = str[i] - 96;
	}
	while ( x > 0)
	{
		ft_putchar(str[i]);
		x--;
	}
	if (str[i] >= 'A' && str[i] <= 'Z')
	{
		y = str[i] - 64;
	}
	while (y > 0)
	{
		ft_putchar(str[i]);
		y--;
	}
	return (0);
}

int			main(int argc, char **argv)
{
	int i;
	int j;

	i = 1;
	j = argc -argc;
	if (argc < 2 || argc > 2)
	{
		ft_putchar('\n');
		return (0);
	}
	while (argv[i][j] != '\0')
	{
		repeat_alpha(&argv[1][j]);
		j++;	
	}
	ft_putchar('\n');
	return (0);
}
