/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melayyad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 22:59:32 by melayyad          #+#    #+#             */
/*   Updated: 2024/09/16 23:05:56 by melayyad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb == 0 || nb == 1)
		return (0);
	while (i < nb)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	int	b;

	b = ft_is_prime(nb);
	if (nb < 2)
		return (2);
	if (b == 1)
		return (nb);
	if (b == 0)
	{
		while (ft_is_prime(nb) == 0)
		{
			nb++;
		}
	}
	return (nb);
}
