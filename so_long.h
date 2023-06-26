/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbenjell <kbenjell@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 09:20:44 by kbenjell          #+#    #+#             */
/*   Updated: 2023/06/24 22:54:04 by kbenjell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H
# include "libft/libft.h"
# include <mlx.h>

typedef struct s_data
{
	void	*mlx;
	void	*image;
	char	*relative_path;
	int		width;
	int		height;
}			t_data;

#endif