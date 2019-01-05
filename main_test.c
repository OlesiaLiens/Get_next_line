/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_test.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ishyian <ishyian@student.unit.ua>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/15 18:10:09 by ishyian           #+#    #+#             */
/*   Updated: 2018/12/16 19:44:06 by ishyian          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <fcntl.h>
#include "./get_next_line.h"
#include "./libft/libft.h"

int		main(void)
{
	int		fd[5];
	int		i;
	int		ii;
	int		fd_index;
	int		ret;
	char	*line;

	setbuf(stdout, NULL);
	line = NULL;
	ret = -1;
	fd[0] = open("main_test.c", O_RDONLY);
	fd[1] = open("get_next_line.c", O_RDONLY);
	fd[2] = open("get_next_line.h", O_RDONLY);
	fd[3] = open("one_big_fat_line.txt", O_RDONLY);
	fd[4] = open("a.out", O_RDONLY);
	i = 0;
	ii = 0;
	while (i < 1000)
	{
		fd_index = i % 4;
		if (fd[i % 4] != -1)
		{
			ret = get_next_line(fd[fd_index], &line);
			printf("ret: %i line_N: %i  	|%s| \n", ret, i + 1, line);
			if (ret == 0)
			{
				ii++;
				fd[fd_index] = -1;
			}
			free(line);
		}
		i++;
	}
//	system("leaks a.out");
// 	printf("lstlen before: %zu ", ft_lstlen(lst));
	return (0);
}
