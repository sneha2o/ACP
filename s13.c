#include<stdio.h>
struct time
{
 int hh;
 int mm;
 int ss;
};
void main()
{
 struct time t1,t2,t3;
 printf("Enter First time");
 printf("\nEnter hours:");
 scanf("%d",&t1.hh);
 printf("\nEnter minites:");
 scanf("%d",&t1.mm);
 printf("\nEnter Second:");
 scanf("%d",&t1.ss );
 printf("Enter second time");
 printf("\nEnter hours:");
 scanf("%d",&t2.hh);
 printf("\nEnter minites:");
 scanf("%d",&t2.mm);
 printf("\nEnter Second:");
 scanf("%d",&t2.ss );
 differance(t1,t2);
 getch();
}
differance(struct time t1,struct time t2)
{
 printf("\n Differance:%d hours%dminites%d Second%d",t1.hh-t2.hh,t1.mm-t2.mm,t1.ss-t2.ss);
 return(0);
}
/*OUTPUT=>Enter First time
Enter hours:5

Enter minites:12

Enter Second:57
Enter second time
Enter hours:3

Enter minites:45

Enter Second:66

 Differance:2 hours-33minites-9 Second1
*/
