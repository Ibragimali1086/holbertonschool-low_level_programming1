#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	if(n>0)
		printf("is positive");
	else if(n<0)
		printf("is negative");
	else
		printf("is zero");
	return 0;
}
