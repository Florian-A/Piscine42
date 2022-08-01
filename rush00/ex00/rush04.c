/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: e███████ <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/08 01:36:41 by e███████          #+#    #+#             */
/*   Updated: 2021/08/08 15:22:45 by f██████          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char a);

void	print_line(int x, int y, int i, int j)
{
	if (i == 0 || i == x - 1)
	{
		if (j == 0 || j == y - 1)
		{
			if ((x == 1 && y == 1) || (x == 1 && j == 0))
				ft_putchar('A');
			else if ((j == 0 && i == x - 1) || (x == 1 && j == y - 1))
				ft_putchar('C');
			else if ((j == 0 && i == 0) || (j == y - 1 && i == x - 1))
				ft_putchar('A');
			else
				ft_putchar('C');
		}
		else
			ft_putchar('B');
	}
	else
	{
		if (j == 0 || j == y - 1)
			ft_putchar('B');
		else
			ft_putchar(' ');
	}
}

void	rush(int x, int y)
{
	int	i;
	int	j;

	j = 0;
	while (j < y)
	{
		i = 0;
		while (i < x)
		{
			print_line(x, y, i, j);
			i++;
		}
		if (x > 0)
			ft_putchar('\n');
		j++;
	}
}
