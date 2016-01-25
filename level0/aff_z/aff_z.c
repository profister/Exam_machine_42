/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_z.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndavid <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/19 17:36:30 by ndavid            #+#    #+#             */
/*   Updated: 2015/09/19 18:56:19 by ndavid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

char	aff_z(char *str)
{
	int i;
	int x;

	x = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == 'z')
		{
			ft_putchar('z');
			ft_putchar('\n');
			x = 1;
			return (0);
		}
		else if ((str[i] != 'z') && (x < 1))
		{
			ft_putchar('z');
			ft_putchar('\n');
			return (0);
		}
		++i;
	}	
	return (0);
}

int		main(int argc, char **argv)
{
	int i;
	int j;

	i = 0;
	j = 0;
	if (argc != 2)
	{
		ft_putchar('z');
		ft_putchar('\n');
		return (0);
	}
		aff_z(argv[i + 1]);
	return (0);
}
