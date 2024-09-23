/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melayyad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 11:20:39 by melayyad          #+#    #+#             */
/*   Updated: 2024/09/19 11:21:14 by melayyad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	size;
	int	*range;
	int	i;

	size = max - min ;
	i = 0;
	if (size <= 0)
		return (NULL);
	range = malloc(4 * size);
	if (range == NULL)
		return (NULL);
	while (min < max)
		range[i++] = min++;
	return (range);
}
