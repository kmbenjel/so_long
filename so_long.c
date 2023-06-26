/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbenjell <kbenjell@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 09:11:24 by kbenjell          #+#    #+#             */
/*   Updated: 2023/06/25 17:17:37 by kbenjell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	valid_map(char *map)
{
	
	return (1);
}
int	main(int ac, char **av)
{
	if (ac == 2 && av[1] && valid_map(av[1]))
	{
		mlx_init();
	}
	else
		ft_putstr_fd("Wrong number of parameters!", 1);
	return (0);
}
