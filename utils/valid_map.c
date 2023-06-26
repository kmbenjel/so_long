#include "../so_long.h"

int is_valid_character(char c)
{
    return (c == '0' || c == '1' || c == 'C' || c == 'E' || c == 'P');
}
int validate_map(const char *filename)
{
    int fd;
    char *line;
    t_map map = {0};

    fd = open(filename, O_RDONLY);
    if (fd < 0)
        return 0;

    while (get_next_line(fd, &line))
    {
        int line_len = ft_strlen(line);
        int i = 0;

        if (line_len == 0)
        {
            free(line);
            close(fd);
            return 0;  // Empty line detected
        }

        if (map.width == 0)
            map.width = line_len;
        else if (line_len != map.width)
        {
            free(line);
            close(fd);
            return 0;  // Inconsistent line width
        }

        while (line[i])
        {
            char c = line[i];
            if (!is_valid_character(c))
            {
                free(line);
                close(fd);
                return 0;  // Invalid character detected
            }

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
    }

    close(fd);

    if (map.player_count != 1 || map.exit_count != 1 || map.collectible_count == 0)
        return 0;

    // Additional validation rules if needed

    return 1;
}
