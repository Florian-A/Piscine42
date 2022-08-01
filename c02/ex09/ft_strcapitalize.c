/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: f██████ <f██████@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/04 16:09:35 by f██████           #+#    #+#             */
/*   Updated: 2021/08/11 19:28:52 by f██████          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_del(int n)
{
	if (n < 48 
			|| (n > 57 && n < 65) 
			|| (n > 90 && n < 97) 
			|| n > 122)
		return (1);
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	last_c_is_del;

	i = 0;
	last_c_is_del = 1;
	while (str[i])
	{
		if (!last_c_is_del && (str[i] >= 65 && str[i] <= 90))
			str[i] += 32;
		else
			if (last_c_is_del && (str[i] >= 97 && str[i] <= 122))
				str[i] -= 32;
		if (is_del(str[i]) == 1)
			last_c_is_del = 1;
		else
			last_c_is_del = 0;
		i++;
	}
	return (str);
}
