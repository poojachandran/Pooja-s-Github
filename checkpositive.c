#include <stdio.h>

int main(void) {
	// your code goes here
int n;
scanf("%d",&n);
if(n<0)
	printf("Negative");
else if(n>0)
	printf("Positive");
else 
	printf("Zero");
	return 0;
}
