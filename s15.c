#include<stdio.h>
void swap(int*x,int*y);
void main()
{
 int x=5,y=10;
 printf("Before Swapping\nx=%d\ny=%d\n",x,y);
 swap(&x,&y);
 printf("After Swapping\nx=%d\ny=%d\n",x,y);
 getch();
 
}
void swap(int*a,int*b)
{
 int t;
 t=*b;
 *b=*a;
 *a=t;
}
/*OUTPUT=>
Before Swapping
x=5
y=10
After Swapping
x=10
y=5
*/
