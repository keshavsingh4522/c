#include <stdio.h>
void main()
{
	int a[4][2];
	int b=0,x;
	int i,y;
	for(i=0;i<4;i++)
		for(y=0;y<2;y++)
			a[i][y]=b++;

	x=*(*(a+2)-1);//a[2][-1]
	printf("%d",x);
}
