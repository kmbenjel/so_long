/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbenjell <kbenjell@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 09:11:24 by kbenjell          #+#    #+#             */
/*   Updated: 2023/11/27 04:09:10 by kbenjell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../main.h"

void	ft_perror(void)
{
	perror("Error:\nI couldn't generate the map!");
}

char	**ft_parse(char *filepath)
{
	char	*current_line;
	char	*map;
	int		fd;

	current_line = "";
	fd = open(filepath, O_RDONLY);
	if (fd < 0)
		ft_perror();
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
