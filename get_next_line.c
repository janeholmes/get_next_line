#include "get_next_line.h"

char *ft_rewrite(char *buffer, char *temp)
{
    char *hold;

    hold = ft_strjoin(buffer, temp);
    free(buffer);
    buffer = hold; 
    return (buffer); 


}

char *ft_read_line(char *buffer)
{
    char *line;
    int x; 
    int y; 

    x = 0; 
    y = 0;

    //printf("Start of read line, buffer is %s", buffer);

    if(!buffer[0])
        return (NULL);

    while(buffer[x] != '\n')
        x++;
    //printf("x is %d", x);
    line = malloc(x+2);
    if(!line)
        return (NULL);
    while (y < x)
    {
        line[y] = buffer[y]; 
        y++; 
    }
    if(buffer[y] == '\n')
        line[y++] = '\n';
    line[y] = '\0';
    //printf("in the end of read line, line is %s", line);
    return (line);

}
char *read_from_file(char* buffer, int fd)
{
    int nb; 
    char *temp; 

    nb = 1; 
    if (fd == -1)
        return (NULL); 

    temp = (char *)malloc(BUFFER_SIZE+1);
    if (!temp)
        return (NULL);

    while (nb > 0)
    {
        nb = read(fd, temp, BUFFER_SIZE);
        if (nb <= 0)
        {
            free(temp);
            free(buffer);
            return (NULL); 
        }
        //printf("%s", buffer);
        temp[nb] = '\0';
        buffer = ft_rewrite(buffer, temp);
        if(ft_strchr(temp, '\n'))
            break ; 
    }
    //printf("In the end of read from file, buffer is %s", buffer);
    free(temp);
    return (buffer);

}

char *get_next_line(int fd)
{
    static char *buffer; 
    char *line; 

    if (fd == -1)
        return (NULL); 
    
    buffer = (char *)malloc(BUFFER_SIZE+1);
    if (!buffer)
        return (NULL); 
    
    if (!(ft_strchr(buffer, '\n')))
        buffer = read_from_file(buffer, fd);
    //printf("%s", buffer); 
    line = ft_read_line(buffer);
    
    return (line);
}


int main (void)
{
   int fd = open("text.txt", O_RDONLY);
   char *line;
   
   while ((line = get_next_line(fd)) != NULL)
   {
        printf("%s", line); 
        free(line); 
   } 
   
   close(fd); 
   return (0); 
}

