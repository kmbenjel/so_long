/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_params.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbenjell <kbenjell@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 19:04:47 by kbenjell          #+#    #+#             */
/*   Updated: 2023/11/26 19:48:25 by kbenjell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../main.h"

int	ft_bad_filename(char *filepath)
{
	int		filename_length;
	char	*filename;

	filename = filepath + ft_strlen(filepath);
	while (*filename != '/' && filename != filepath)
		filename--;
	filename_length = ft_strlen(filename);
	if (filename_length >= 5 && !ft_strncmp(filename + (filename_length - 4),
			".ber", 3))
		return (0);
	return (1);
}

void	ft_check_params(int ac, char **av)
{
	if (ac != 2)
	{
		perror("Error:\n\tWrong number of parameters!");
		exit;
	}
	if (ft_bad_filename(av[1]))
	{
		perror("Error:\n\tBad filename!");
		exit;
	}
}
