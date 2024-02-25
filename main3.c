#include "get_next_line.h"

int	main(void)
{
	int fd1;
	int fd2;
	int fd3;
	char *line;
	int x;

	fd1 = open("text2.txt", O_RDONLY);
	fd2 = open("text.txt", O_RDONLY);
	fd3 = open("text5.txt", O_RDONLY);
	x = 3;
	/*while (x > 0)
	{
		line = get_next_line(fd1);
		printf("%s", line);
		free(line);
		line = get_next_line(fd2);
		printf("%s", line);
		free(line);
		line = get_next_line(fd3);
		printf("%s", line);
		free(line);
		x--;
	}*/

	line = get_next_line(fd1);
	printf("%s", line);
	free(line);
	line = get_next_line(fd2);
	printf("%s", line);
	free(line);
	line = get_next_line(fd3);
	printf("%s", line);
	free(line);

	close(fd1);
	close(fd2);
	close(fd3);
	return (0);
}