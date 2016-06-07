#include<stdio.h>
void main()
{
	int i,a=-1,b=1,c=0,n;
	scanf("%d",&n);
	for(i=0;i<n;i++)
		{
			c=a+b;
			printf("\n%d",c);
			a=b;
			b=c;
		}
	}
