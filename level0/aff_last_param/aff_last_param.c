/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_last_param.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndavid <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/19 17:08:31 by ndavid            #+#    #+#             */
/*   Updated: 2015/09/19 17:30:51 by ndavid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void		ft_putchar(char c)
{
	write(1, &c, 1);
}

int			main(int argc, char **argv)
{
	int i;
	int j;

	i = argc - 1;
	j = 0;
	
	while (argv[i][j] != '\0' && argc >= 2)
	{
		ft_putchar(argv[i][j]);
		j++;
	}
	ft_putchar('\n');
	return (0);
}
