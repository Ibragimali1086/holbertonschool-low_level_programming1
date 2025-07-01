#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *arr;
	int n = 5;
	int h;

    	arr = (int*) malloc(n * sizeof(int));
	for(int i=0;i<5;i++)
	{
		scanf("%d",&h);
		arr[i]=h;
	}
	for(int i=0;i<5;i++)
        {
                printf("%d",arr[i]);
        }

	
	free(arr);
	return(0);
}
