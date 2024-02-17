#ifndef GET_NEXT_LINE_H
#define GET_NEXT_LINE_H

#include <unistd.h> 
#include <fcntl.h>
#include <stdio.h> 
#include <stdlib.h>
#include <string.h>

char *get_next_line(int fd);
char	*ft_strchr(const char *s, int c);
char	*ft_strjoin(char const *s1, char const *s2);

#endif

#ifndef BUFFER_SIZE
# define BUFFER_SIZE 1
#endif