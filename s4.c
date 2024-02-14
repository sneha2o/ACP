#include<stdio.h>
void main()
{
	int arr[10]={10,20,30,40,50,60,70,80,90,100};
	int i;
	int*ptr;
	ptr=arr;
	for(i=0;i<10;i++)
	{
		printf("value of arr[%d]:%d\n",i,*ptr);
		ptr++;
	}
}
/*OUTPUT=>
value of arr[0]:10
value of arr[1]:20
value of arr[2]:30
value of arr[3]:40
value of arr[4]:50
value of arr[5]:60
value of arr[6]:70
value of arr[7]:80
value of arr[8]:90
value of arr[9]:100*/
