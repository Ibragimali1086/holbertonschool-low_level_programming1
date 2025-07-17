#include<stdio.h>

int  add(int a, int b)
{
    return a + b;
}
int subtract(int a,int b)
{
	return a-b;
}
int multiply(int a,int b)
{
	return a*b;
}
int main()
{
	int (*function[3])(int,int)={add,subtract,multiply};
	printf("%d ",function[0](5,3));
	printf("%d ",function[1](5,3));
	printf("%d",function[2](5,3));
	return 0;
}

