/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_words.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: f██████ <f██████@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/04 16:09:35 by f██████           #+#    #+#             */
/*   Updated: 2021/08/24 10:59:05 by f██████          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h> 
#include "rush02.h"

void	put_word(char *c)
{
	int	i;

	i = 0;
	while (g_dict[i])
	{
		if (ft_strcmp(g_dict[i][0], c) == 0)
			ft_putstr(g_dict[i][1]);
		i++;
	}
}

void	first_nb(char *c, int rev_len)
{
	(void)rev_len;
	if (*c != '0')
	{
		put_word(ft_strndup(c, 1));
		ft_putstr(" ");
		put_word("100");
	}
	ft_putstr(" ");
}

void	second_nb(char *c, int rev_len)
{
	(void)rev_len;
	if (*c == '1')
	{
		put_word(ft_strndup(c, 1));
		ft_putstr(ft_strndup(c + 1, 1));
	}
	else if (*c != '0')
	{
		put_word(ft_strndup(c, 1));
		ft_putstr("0");
	}
	ft_putstr(" ");
}

void	third_nb(char *c1, char *c2, char *c3, int rev_len)
{
	int		j;

	if (rev_len != 1 && rev_len != -10)
	{
		j = 0;
		if (!(*c3 == '0' && *c2 == '0' && *c1 == '0'))
		{
			if (*c3 != '0')
				put_word(ft_strndup(c3, 1));
			ft_putstr(" ");
			while (j < rev_len - 1)
			{
				j++;
			}
			put_word(ten_multiple(j));
		}
	}
	else if (*c2 != '1' && *c3 != '0')
	{
		put_word(ft_strndup(c3, 1));
	}
	else if (rev_len == -10)
		put_word("0");
	ft_putstr(" ");
}

void	put_all_words(char *nb)
{
	int	i;
	int	ln;
	int	rev_ln;

	ln = ft_strlen(nb);
	i = 0;
	if (ln == 1 && nb[0] == '0')
		third_nb("0", "0", "0", -10);
	else
	{
		while (i < ln)
		{
			rev_ln = (ln - i);
			if ((rev_ln % 3) == 0)
				first_nb(&nb[i], rev_ln);
			else if ((rev_ln % 3) == 2)
				second_nb(&nb[i], rev_ln);
			else if ((rev_ln % 3) == 1)
				third_nb(&nb[i - 2], &nb[i - 1], &nb[i], rev_ln);
			i++;
		}
	}
}
