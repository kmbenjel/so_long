/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbenjell <kbenjell@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 09:11:24 by kbenjell          #+#    #+#             */
/*   Updated: 2023/11/26 19:01:56 by kbenjell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	main(int ac, char **av)
{
	if (ac == 2 && valid_filename(av[1]))
	{
		mlx_init();
	}
	else
	{
		if (ac != 2)
			perror("Error:\n\tWrong number of parameters!");
		else
			perror("Error:\n\tBad filename!");
	}
	return (0);
}
