#include <REGX51.H>
#include <math.h>

void delay(unsigned int i)
{
	unsigned int m,n;
	for(m=0;m<i;m++)
	{
		for(n=0;n<1000;n++);
	}
}

void main()
{
	unsigned int i;
	while(1)
	{
		for(i=8;i>3;i--)
		{
		P1=((pow(2,i))-(pow(2,(8-i))));
		delay(100);
	}
		for(i=4;i<9;i++)
		{
		P1=((pow(2,i))-(pow(2,(8-i))));
		delay(100);
	}
}
	
}
