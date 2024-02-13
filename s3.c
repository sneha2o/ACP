#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void main()
{
	int i,*j,**k;
	i=45;
	j=&i;
	k=&j;
	printf("values in variable \n");
	printf("value in i%d\n",i);
	printf("value in j which is the address of i %d\n",j);
	printf("value in k which is the address of j %d\n",k);
 printf("Address of i which is value in j%u\n",&i);
	printf("Address of j which is value in k %u\n",&j);
	printf("Address of k %u\n",&k);
	printf("value in i %d\n",*(&i))	;
	printf("value in i %d\n",*j);
	printf("value in i %d\n",**k);
	printf("value in j %d\n",*(&j));
	printf("value in j %d\n",*k);
	printf("value in k &d\n",*(&k));
}
/*OUTPUT
values in variable
value in i45
value in j which is the address of i 6487580
value in k which is the address of j 6487568
Address of i which is value in j6487580
Address of j which is value in k 6487568
Address of k 6487560
value in i 45
value in i 45
value in i 45
value in j 6487580
value in j 6487580
value in k &d
*/
