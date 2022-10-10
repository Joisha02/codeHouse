#include<stdio.h>
#include<conio.h>
int main()
{
	int i,j,a,n,arr[100];
	printf("enter the number of n: ");
	scanf("%d",&n);
	printf("enter the numbers:");
	for(i=0;i<n;i++)
	scanf("%d",&arr[i]);
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{if(arr[i]>arr[j])
		{
			a=arr[i];
			arr[i]=arr[j];
			arr[j]=a;
		}
		}
	}
	printf("the assending order is :");
	for(i=0;i<n;i++)
	printf("\n %d",arr[i]);
	}
