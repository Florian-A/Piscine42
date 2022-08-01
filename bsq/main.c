/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: g██████ <g██████@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/23 07:27:58 by g██████           #+#    #+#             */
/*   Updated: 2021/08/25 03:41:18 by g██████          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/ft_header.h"

int	main(int argc, char **argv)
{
	int		i;
	t_bsq	*bsq;

	bsq = bsq_init();
	if (!bsq)
		ft_putstr("error");
	else if (argc >= 2)
	{
		i = 1;
		while (i < argc)
		{
			run_file_resolver(bsq, argv[i]);
			i++;
		}
	}
	else
		run_file_resolver_stdi(bsq);
	if (bsq)
		free(bsq);
}

void	run_file_resolver(t_bsq *bsq, char *arg)
{
	bsq_init_var(bsq);
	if (file_open(bsq, arg))
	{
		ft_algo_slip_init(bsq);
		file_close(bsq);
		if (file_open(bsq, arg))
		{
			if (bsq->error == NO_ERROR)
				print_result(bsq);
			file_close(bsq);
		}
		free_all(bsq);
	}
	ft_pross_error(bsq);
}

void	run_file_resolver_stdi(t_bsq *bsq)
{
	bsq_init_var(bsq);
	if (file_open_std(bsq))
	{
		ft_algo_slip_init(bsq);
		file_close(bsq);
		if (bsq->error == NO_ERROR)
			print_result(bsq);
		free_all(bsq);
	}
	ft_pross_error(bsq);
}
