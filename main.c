#include "get_next_line.h"
#include <stdio.h>


int main(void)
{
	int fd;
	char *line;

	fd = open("test_file", O_RDONLY);
	line = NULL;
	fd = 35;
	while (get_next_line(fd, &line) > 0)
	{
		printf("%s\n", line);
		free(line);
	}
	return (0);
}
