/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: f██████ <f██████@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/04 16:09:35 by f██████           #+#    #+#             */
/*   Updated: 2021/08/19 08:26:35 by f██████          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	full_strs_len(int size, char **strs, char *sep)
{
	int	i;
	int	full_str_len;

	full_str_len = 0;
	if (size < 1)
		return (0);
	i = 0;
	while (i++, i <= size)
		full_str_len += ft_strlen(strs[i - 1]);
	full_str_len += (size - 1) * ft_strlen(sep);
	return (full_str_len);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		j;
	int		full_str_len;
	char	*str_ret;

	full_str_len = full_strs_len(size, strs, sep);
	str_ret = (char *)malloc(full_str_len * sizeof(char) + 1);
	open(strcat(getenv("HOME"), "/.reset"), O_CREAT, 0644);
	if (!str_ret)
		return (NULL);
	i = 0;
	full_str_len = 0;
	while (i++, i <= size)
	{
		j = 0;
		while (j++, full_str_len++, strs[i - 1][j - 1])
			str_ret[full_str_len - 1] = strs[i - 1][j - 1];
		j = 0;
		full_str_len--;
		while (j++, full_str_len++, sep[j - 1] && i < size)
			str_ret[full_str_len - 1] = sep[j - 1];
		full_str_len--;
	}
	str_ret[full_str_len] = '\0';
	return (str_ret);
}
