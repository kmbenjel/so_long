/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbenjell <kbenjell@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 13:13:15 by kbenjell          #+#    #+#             */
/*   Updated: 2023/06/26 13:13:42 by kbenjell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <mlx.h>
#include <stdio.h>

int	main(void)
{
	void	*mlx;
	void	*img;
	void	*win;

	mlx = mlx_init();
	win = mlx_new_window(mlx, 500, 500, "so_long");
	img = mlx_
	mlx_put_image_to_window(mlx,win, void *img_ptr, int x, int y)
	mlx_loop(mlx);
	return (0);
}
