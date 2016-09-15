#include <stdio.h>
void deleteBlankInStr(char *str)
{
	char *p1=str,*p2=str;
	if(str==NULL)
	{
		return ;
	}
	while(*p1)
	{
		if(*p1==' ')
		{
			p1++;
		}
		else
		{
			*p2++=*p1++;
		}
	}
	*p2=0;//end of str
}


int main(int argc ,char **argv)
{
	char a[100];
	gets(a);
	deleteBlankInStr(a);
	printf("%s\n",a);
	return 0;
}

