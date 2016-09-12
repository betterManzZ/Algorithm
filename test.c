#include "stdio.h"
#include "test.h"
int main(int argc,char *argv[])
{
	char buf[10000];
	int count=0;
	FILE *fd;
	char *path = argv[1];
	if(argc!=2)
	{
		printf("Usage input:argv must be a file path!\n");
		return 0;
	}
	if((fd=fopen(path,"r"))==NULL)
	{
		printf("file open failed!please check file name!\n");
		return 0;
	}

	fseek(fd,0,SEEK_END);
	count = ftell(fd);
	rewind(fd);
	fread(buf,1,count,fd);
	buf[count] = 0;
	printf("%s\n",buf);
	fclose(fd);
	return 0;
}
