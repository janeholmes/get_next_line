#include "get_next_line.h"

int main (void)
{
   int fd = open("text3.txt", O_RDONLY);
   char *line;

   while ((line = get_next_line(fd)) != NULL)
   {
        printf("%s", line); 
        free(line); 
   }
   
   close(fd); 
   return (0); 
}