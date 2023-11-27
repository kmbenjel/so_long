/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_imgs.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbenjell <kbenjell@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 08:21:08 by kbenjell          #+#    #+#             */
/*   Updated: 2023/11/27 09:02:25 by kbenjell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

void	ft_img_to_window(t_data ***data, int x, int y, char *img)
{
	int	image_width;
	int	image_height;

	(**data)->image = mlx_xpm_file_to_image((**data)->mlx, img, &image_width,
			&image_height);
	mlx_put_image_to_window((**data)->mlx, (**data)->window, (**data)->image, x,
		y);
}

void	ft_img_to_map(char p, int x1, int y1, t_data **data)
{
	if (p == '1')
		ft_img_to_window(&data, x1, y1, "./textures/wall.xpm");
	else if (p == 'C')
	{
		ft_img_to_window(&data, x1, y1, "./textures/floor.xpm");
		ft_img_to_window(&data, x1, y1, "./textures/coin.xpm");
		(*data)->coins++;
	}
	else if (p == 'E')
		ft_img_to_window(&data, x1, y1, "./textures/exit.xpm");
	else if (p == 'P')
	{
		(*data)->player_x = y1;
		(*data)->player_y = x1;
		ft_img_to_window(&data, x1, y1, "./textures/floor.xpm");
		ft_img_to_window(&data, x1, y1, "./textures/player_going_down.xpm");
	}
	else
		ft_img_to_window(&data, x1, y1, "./textures/floor.xpm");
}
