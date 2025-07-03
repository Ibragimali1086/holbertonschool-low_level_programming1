#include<stdio.h>

int factorial(int n)
{
	if(n==0 || n==1)
	{
		return 1;
	}
	return n*(factorial(n-1));
}
int main()
{
	int h;
	scanf("%d",&h);
	int y=factorial(h);
	printf("%d",y);
	return 0;
}
