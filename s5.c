#include<stdio.h>
void main()
{
	int arr[50];
	int i,n;
	int position,value;
	printf("\n Enter number of element in array:");
	scanf("%d",&n);
	printf("\n Enter %d Element\n",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("\n\nEnter the position of where you want to insert a new element:");
	scanf("%d",&position);
	if(position>=n+1)
	{
		printf("\n Declaration Error:invalide position.\n");
	}
	else
	{
		for(i=position-1;i<n-1;i++)
		{
			arr[i]=arr[i+1];
		}
	}
	printf("\n array after declaration:\n");
	for(i=0;i<=n;i++)
	{
		printf("%d",arr[i]);
	}
}
/*OUTPUT=>
 Enter number of element in array:5

 Enter 5 Element
1
2
3
4
5


Enter the position of where you want to insert a new element:3

 array after declaration:
124550
*/
