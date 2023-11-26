/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbenjell <kbenjell@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 09:20:44 by kbenjell          #+#    #+#             */
/*   Updated: 2023/11/26 22:19:09 by kbenjell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAIN_H
# define MAIN_H

# include "get_next_line/get_next_line.h"
# include "libft/libft.h"
# include <fcntl.h>
# include <mlx.h>
# include <stdio.h>
# include <stdlib.h>

typedef struct s_data
{
	void	*mlx;
	void	*image;
	char	**map;
	int		width;
	int		height;
	int		player_x;
	int		player_y;
}			t_data;

typedef struct s_map
{
	char	character;
	int		collectible_count;
	int		player_count;
	int		exit_count;
	int		line_len;
	int		width;
	int		height;
}			t_map;

#endif
