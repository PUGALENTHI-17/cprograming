/* cp command simulation - copy.c */
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <sys/stat.h>
#define SIZE 1024
main(int argc, char *argv[])
{
 int src, dst, nread;
 char buf[SIZE];
 src = open(argv[1], O_RDONLY);
 dst = creat(argv[2], 0644);

 while ((nread = read(src, buf, SIZE)) > 0)
 {
 if (write(dst, buf, nread) == -1)
 {
 printf("can't write\n");
 exit(-1);
 }
 else {
    printf("\n File copied sucessfully:");
 }
 }
 close(src);
 close(dst);
} 
