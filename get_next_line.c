#include "get_next_line.h"

char *get_next_line(int fd)

//use open function int open (const char* Path, int flags);
//O_RDONLY	flag - open file in read only 
//ex. int fd = open("foo.txt", O_RDONLY | O_CREAT);
//size_t read (int fd, void* buf, size_t cnt);

/*fd: file descriptor of the file from which data is to be read.
buf: buffer to read data from
cnt: length of the buffer*/

/*return Number of bytes read on success
return 0 on reaching the end of file
return -1 on error
return -1 on signal interrupt*/
