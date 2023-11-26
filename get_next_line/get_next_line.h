/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbenjell <kbenjell@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 23:59:21 by kbenjell          #+#    #+#             */
/*   Updated: 2023/11/26 22:43:43 by kbenjell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# include <stdlib.h>
# include <unistd.h>

char		*get_next_line(int fd);
size_t		ft_strlen(const char *str);
static char	*ft_strjoin_on_off(char *s1, char *s2, int on_off);
char		*until_nl(char *s);
char		*after_nl(char *s);

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 1
# endif

#endif
