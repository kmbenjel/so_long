/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbenjell <kbenjell@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 09:11:24 by kbenjell          #+#    #+#             */
/*   Updated: 2023/11/27 08:09:31 by kbenjell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

void	ft_exit(t_data *data)
{
	int	x;

	x = 0;
	while (data->map[x])
	{
		free(data->map[x]);
		x++;
	}
	free(data->map);
	mlx_destroy_window(data->mlx, data->win);
	exit(1);
}

int	ft_key_hook(int key_code, t_data *data)
{
	int	x;

	if (key_code == 'D')
		ft_right(&data);
	else if (keycode == 'A')
		ft_left(&data);
	else if (keycode == 'W')
		ft_up(&data);
	else if (keycode == 'S')
		ft_down(&data);
	else if (keycode == 53)
		ft_exit(&data);
}

void	ft_render(t_data, *data)
{
}

void	ft_init(t_data *data)
{
}

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
