/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndavid <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/22 07:45:20 by ndavid            #+#    #+#             */
/*   Updated: 2015/09/22 09:32:12 by ndavid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void		ft_putchar(char c)
{
	write(1, &c, 1);
}

void		last_word(char *str)
{
	int i;
	int check;

	check = 0;
	i = 0;
	while (str[i] != '\0')
	{	
		i++;
	}
	i--;
	while (str[i] == ' ' || str[i] == 0)
	{
		i--;
	}
	while (str[i] != ' ')
	{
		i--;
		check = 1;
	}
	i++;
	while (check == 1 && str[i] != '\0' && str[i] != ' ')
	{
		ft_putchar(str[i]);
		i++;
	}
}

int			main(int argc, char **argv)
{
	int j;

	j = 0;
	while (argv[1][j] == ' ')
	{
		j++;
		if (argv[1][j] == '\0')
		{
			ft_putchar('\n');
			return (0);	
		}
	}
	if (argc == 2)
		last_word(argv[1]);
	ft_putchar('\n');
	return (0);
}
