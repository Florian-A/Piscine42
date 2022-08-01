/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: f██████ <f██████@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/04 16:09:35 by f██████           #+#    #+#             */
/*   Updated: 2021/08/12 10:08:33 by f██████          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	src_len;
	unsigned int	dest_len;
	unsigned int	i;
	unsigned int	dist;

	src_len = ft_strlen(src);
	dest_len = ft_strlen(dest);
	i = 0;
	while (i < size && dest[i])
		i++;
	dist = i;
	if (size < dest_len || size != 0)
		return (src_len - size);
	if (dest_len < size)
	{
		i = 0;
		while ((i < size - dest_len - 1) && src[i])
		{
			dest[dest_len + i] = src[i];
			i++;
		}
	}
	if (i > 0)
		dest[dest_len + i] = '\0';
	return (src_len + dist);
}
