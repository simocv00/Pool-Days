/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melayyad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 11:22:24 by melayyad          #+#    #+#             */
/*   Updated: 2024/09/19 11:22:27 by melayyad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i])
		i++;
	while (src[j])
		dest[i++] = src[j++];
	dest[i] = 0;
	return (dest);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strmcat(char *str, char **strs, char *sep, int size)
{
	int	i;

	i = 0;
	while (++i < size)
	{
		ft_strcat(str, sep);
		ft_strcat(str, strs[i]);
	}
	return (str);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		len[2];
	int		i;
	char	*str;

	i = 0;
	len[0] = 0;
	len[1] = ft_strlen(sep);
	if (size == 0)
	{
		return (NULL);
	}
	while (i < size)
		len[0] += ft_strlen(strs[i++]);
	str = malloc(len[0] + 1 + len[1] * (size - 1));
	if (str == NULL)
		return (NULL);
	str[0] = '\0';
	ft_strcat(str, *strs);
	str = ft_strmcat(str, strs, sep, size);
	return (str);
}
