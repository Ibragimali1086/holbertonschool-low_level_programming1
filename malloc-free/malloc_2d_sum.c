#include<stdio.h>
#include<stdlib.h>
int main()
{
	int **arr;
	int n;
	int m;
	scanf("%d%d",&n,&m);
	int h;
	int s=0;

    	arr =  malloc(n * sizeof(int));
	for(int i=0;i<n;i++)
	{
		arr[i] =  malloc(n * sizeof(int));
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			scanf("%d",&h);
			arr[i][j]=h;
		}
	}
	s=0;
	for(int i=0;i<n;i++)
        {
                for(int j=0;j<m;j++)
                {
			s=s+arr[i][j];
                }
        }

	printf("%d",s);
	for (int i = 0; i < n; i++)
	{
    		free(arr[i]);
	}
	free(arr);
}
