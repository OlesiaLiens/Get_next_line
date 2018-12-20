/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oshyiata <oshyiata@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/27 12:52:06 by oshyiata          #+#    #+#             */
/*   Updated: 2018/12/10 14:48:46 by oshyiata         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# include <stdlib.h>
# include <fcntl.h>
# include "libft/libft.h"
# define BUFF_SIZE 32
# define MAX_FD 4864

typedef struct	s_gnl
{
	char		*join2;
	char		*temp;
	int			res;
	char		*index_n;
	char		*buf;
}				t_gnl;

int				get_next_line(const int fd, char **line);

#endif
