#include<stdio.h>

int main()
{
	int x,y,z;
	int i=0;
	printf("     man    woman   children\n");
	for(x=1;x<=16;x++)
	{
		y=20-2*x;
		z=30-x-y;
		if(3*x+2*y+z==50 && y>0 && z>0)
	{
		printf("第%d: %d%8d%8d\n",++i,x,y,z);
	}
	}
	return 0;
}
