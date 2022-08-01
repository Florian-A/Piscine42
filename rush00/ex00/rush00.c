/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: e███████ <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/08 01:36:41 by e███████          #+#    #+#             */
/*   Updated: 2021/08/08 15:05:09 by c███████         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char a);

void	print_line(int x, int y, int i, int j)
{
	if (i == 0 || i == x - 1)
	{
		if (j == 0 || j == y - 1)
			ft_putchar('o');
		else
			ft_putchar('|');
	}
	else
	{
		if (j == 0 || j == y - 1)
			ft_putchar('-');
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
