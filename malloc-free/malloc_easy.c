#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *arr;
	int n = 1;

    	arr = (int*) malloc(n * sizeof(int));
	arr[0]=42;
	printf("%d\n",arr[0]);
	free(arr);
	return(0);
}
