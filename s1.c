/*swaping*/
#include<stdio.h>
void main()
{
	int a,b;
	printf("Enter a and b values\n");
	scanf("%d%d",&a,&b);
	printf("values before swap\n a =%d\n b=%d\n",a,b);
	swap(&a,&b);
	printf("values after swap\n a=%d\n b=%d\n",a,b);
}
void swap(int*x,int*y)
	{
		int t;
		t=*x;
		*x=*y;
		*y=t;
		
	}
	/*Enter a and b values
100
200
values before swap
 a =100
 b=200
values after swap
 a=200
 b=100*/

