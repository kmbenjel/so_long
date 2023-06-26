#include "../so_long.h"

static void	free_map(char **map, int height)
{
	int	i;

	i = 0;
	while (i < height)
	{
		free(map[i]);
		i++;
	}
	free(map);
}

static int	is_valid_character(char c)
{
	return (c == '0' || c == '1' || c == 'C' || c == 'E' || c == 'P');
}

static int	free_line_and_close_fd(int fd, char *line)
{
	free(line);
	close(fd);
	return (0);
}

int	validate_map(const char *filename)
{
	int		fd;
	char	*line;
	t_map	map;
	int		line_len;
	int		i;
	char	c;

	map = {0};
	fd = open(filename, O_RDONLY);
	if (fd < 0)
		return (0);
	line = get_next_line(fd);
	while (line)
	{
		line_len = ft_strlen(line);
		i = 0;
		if (line_len == 0)
			return (free_line_and_close_fd(fd, line));
		if (map.width == 0)
			map.width = line_len;
		else if (line_len != map.width)
			return (free_line_and_close_fd(fd, line));
		while (line[i])
		{
			c = line[i];
			if (!is_valid_character(c))
               return (free_line_and_close_fd(fd, line)); 
			if (c == 'P')
				map.player_count++;
			else if (c == 'E')
				map.exit_count++;
			else if (c == 'C')
				map.collectible_count++;
			i++;
		}
		map.height++;
		free(line);
		line = get_next_line(fd);
	}
	close(fd);
	if (map.player_count != 1 || map.exit_count != 1
		|| map.collectible_count == 0)
		return (0);
	return (1);
}
