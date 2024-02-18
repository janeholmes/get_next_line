#include "get_next_line.h"

int	main(int argc, char **argv)
{
	int fd = open(argv[1], O_RDONLY);
	char *line;
	if (argc != 2)
	{
		printf("Usage: %s <filename>\n", argv[0]);
		return (1);
	}

	while ((line = get_next_line(fd)) != NULL)
	{
		printf("%s", line);
		free(line);
	}

	close(fd);
	return (0);
}