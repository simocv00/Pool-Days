/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melayyad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 22:11:17 by melayyad          #+#    #+#             */
/*   Updated: 2024/09/12 22:23:53 by melayyad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)

{
	int	i;
	int	x;

	x = 1;
	while (x < argc)
	{
		while (argv[x][i] != '\0')
		{
			write(1, &argv[x][i], 1);
			i++;
		}
		write(1, "\n", 1);
		i = 0;
		x++;
	}
}