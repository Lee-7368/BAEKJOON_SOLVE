#include <stdio.h>

int main(void)
{
	int num1, num2;
	scanf("%d %d", &num1, &num2);
	printf("%d\n", num1 + num2);
	printf("%d\n", num1 - num2);
	printf("%d\n", num1 * num2);
	printf("%d\n", num1 / num2);
	printf("%d", num1 % num2);

	return 0;
}
/*
main(a,b)
{
	scanf("%d%d",&a,&b);
	printf("%d\n%d\n%d\n%d\n%d",a+b,a-b,a*b,a/b,a%b);
}
*/