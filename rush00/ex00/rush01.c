/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: c███████ <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/08 10:53:51 by c███████          #+#    #+#             */
/*   Updated: 2021/08/08 15:42:35 by f██████          ###   ########.fr       */
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
				ft_putchar('/');
			else if ((j == 0 && i == x - 1) || (x == 1 && j == y - 1))
				ft_putchar('\\');
			else if ((j == 0 && i == 0) || (j == y - 1 && i == x - 1))
				ft_putchar('/');
			else
				ft_putchar('\\');
		}
		else
			ft_putchar('*');
	}
	else
	{
		if (j == 0 || j == y - 1)
			ft_putchar('*');
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
