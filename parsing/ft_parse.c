/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_map.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbenjell <kbenjell@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 09:11:24 by kbenjell          #+#    #+#             */
/*   Updated: 2023/11/26 22:25:33 by kbenjell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../main.h"

void	ft_perror(void)
{
	perror("Error:\nI couldn't generate the map!");
	exit;
}

char	**ft_parse(char *filepath)
{
	char	*current_line;
	char	*map;
	int		fd;

	current_line = "";
	if (fd < 0)
		ft_perror();
	fd = open(filepath, O_RDONLY);
	while (current_line)
	{
		current_line = get_next_line(fd);
		if (!current_line || current_line[0] == '\n')
		{
			free(current_line);
			ft_perror();
			break ;
		}
		map = ft_strjoin(map, current_line);
		free(current_line);
	}
	close(fd);
	return (ft_split(map, '\n'));
}
