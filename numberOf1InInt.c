#include <stdio.h>
/* 计算一个整形数二进制中1的个数，平行算法  */
/*
 *      1101 1000 0011 1110
 *       2 1  1  0 0 2  2  1
 *		  3    1    2     3
 *		     4         5
 *		   	       9
 */
int number1InInt(int num)
{
	num = (num&0x55555555)+((num&0xaaaaaaaa)>>1);	
	num = (num&0x33333333)+((num&0xcccccccc)>>2);
	num = (num&0x0f0f0f0f)+((num&0xf0f0f0f0)>>4);
	num = (num&0x00ff00ff)+((num&0xff00ff00)>>8);
	num = (num&0x0000ffff)+((num&0xffff0000)>>16);
	return num;
}

int main()
{
	int n;
	scanf("%d",&n);
	printf("%d\n",number1InInt(n));
	return 0;
}
