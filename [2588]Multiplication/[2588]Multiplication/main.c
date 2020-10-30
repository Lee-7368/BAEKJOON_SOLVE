#include <stdio.h>

int main()
{
	int a, b, c, d, e;

	scanf("%d %d", &a, &b);
	
	c = (b % 10) / 1;	   // = b%10
	d = (b % 100) / 10;	   // = b/10%10
	e =  (b % 1000) / 100; // = b/100
	/* better
	c = b % 10;
	d = b / 10 % 10;
	e = b / 100;
	*/
	printf("%d\n%d\n%d\n%d", a*c, a*d, a*e, a*b);
	return 0;
}