#include<stdio.h>
void main()
{
	int arr[50];
	int i,n;
	int position,value;
	printf("\n Enter number of element in array:");
	scanf("%d",&n);
	printf("\n Enter %d elements \n",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("\n\n Enter the position where you want to insert a new element:");
	scanf("%d",&position);
	printf("\n Enter the value:");
	scanf("%d",&value);
	for(i=n-1;i>=position-1;i--)
	{
		arr[i+1]=arr[i];
	}
	arr[position-1]=value;
	printf("\n array after insertion of the new element:");
	for(i=0;i<=n;i++)
	{
		printf("%d",arr[i]);
	}
}
/*OUTPUT
 Enter number of element in array:5

 Enter 5 elements
1
2
3
4
5


 Enter the position where you want to insert a new element:2

 Enter the value:5

 array after insertion of the new element:152345*/
