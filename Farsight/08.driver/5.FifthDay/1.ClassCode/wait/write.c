#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>
 

void main()
{
	int fd;

	fd = open("/dev/hello",O_RDWR);
	if(fd<0)
	{
		perror("open fail\n");
		return ;
	}
	write(fd,"111111",strlen("111111")+1);
	close(fd);
}
