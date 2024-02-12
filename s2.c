/*Enter the 1st character*/
#include<stdio.h>
void main()
{
	char s[25],*t;
	printf("Enter a string\n");
	scanf("%s",&s);
	t=s;
	{
		printf("%c",*t);
		t++;
 }
 printf("\n");
}
/*OUTPUT=>Enter a string
Hello
H*/
