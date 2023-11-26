/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbenjell <kbenjell@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 09:11:24 by kbenjell          #+#    #+#             */
/*   Updated: 2023/11/26 11:56:54 by kbenjell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	valid_filename(char *filename)
{
	int	filename_length;

	filename_length = ft_strlen(filename);
	if (filename_length >= 5 && !ft_strncmp(filename + (filename_length - 4),
			".ber", 3))
		return (1);
	return (0);
}

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
