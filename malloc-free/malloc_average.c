#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *arr;
	int n;
	scanf("%d",&n);
	int h;
	int s;

    	arr = (int*) malloc(n * sizeof(int));
	for(int i=0;i<n;i++)
	{
		scanf("%d",&h);
		arr[i]=h;
	}
	s=0;
	for(int i=0;i<n;i++)
        {
                s=s+arr[i];
        }
	printf("%.2f\n",(double)s/n);
	free(arr);
	return(0);
}
