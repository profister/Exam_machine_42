00/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/18 17:55:13 by exam              #+#    #+#             */
/*   Updated: 2015/09/18 18:33:30 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "head.h"

int	do_op(int a, char o, int b)
{
	if (o == '+')
		return (a + b);
	if (o == '-')
		return (a - b);
	if (o == '*')
		return (a * b);
	if (b != 0 && (o == '/' || o == '\\'))
		return (a / b);
	if (b != 0 && o == '%')
		return (a % b);
	return (42);
}

int	main(int argc, char **argv)
{
	int	a;
	int	b;
	int	r;

	if (argc != 4)
		printf("\n");
	else
	{
		a = atoi(argv[1]);
		b = atoi(argv[3]);
		r = do_op(a, *argv[2], b);
		printf("%d\n", r);
	}
	return (0);
}
