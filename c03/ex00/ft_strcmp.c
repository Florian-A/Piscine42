/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: f██████ <f██████@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/04 16:09:35 by f██████           #+#    #+#             */
/*   Updated: 2021/08/12 10:41:28 by f██████          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int				i;
	char			diff;
	unsigned char	*s1u;
	unsigned char	*s2u;

	s1u = (unsigned char *) s1;
	s2u = (unsigned char *) s2;
	i = 0;
	diff = 0;
	while (s1u[i] && s2u[i])
	{
		diff = s1u[i] - s2u[i];
		i++;
		if (diff != 0)
			return (diff);
	}
	diff = s1u[i] - s2u[i];
	return (diff);
}
