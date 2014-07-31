#include <REGX51.H>

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
	P0=86;
	while(1)
	{
	  P0=~P0;
		delay(100);
		P1=255;
		P2=0xaa;
		P3=0xf0;
	
	
	
	}
	}
