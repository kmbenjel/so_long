/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbenjell <kbenjell@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 09:11:24 by kbenjell          #+#    #+#             */
/*   Updated: 2023/11/27 04:59:57 by kbenjell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

int	main(int ac, char **av)
{
	t_data	data;

	ft_check_params(ac, av);
	data.map = ft_parse(av[1]);
	if (!data.map)
		return (0);
	ft_check_map(data.map);
	ft_init(&data);
	data.mlx = mlx_init();
	data.window = mlx_new_window(data.mlx, data.window_width * 50,
			data.window_height * 50, "So_long");
	return (0);
}
