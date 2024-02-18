#include<stdio.h>
struct in 
{
 int cod;
 char name[10];
 int p;
}s[3];
void input(struct in up[],int n)
{
 int i;
 for(i=1;i<=n;i++)
{
 printf("%d item code:",i);
 scanf("%d",&up[i].cod);
 
 printf("item name:");
 scanf("%s",&up[i].name);
 
 printf("item price:");
 scanf("%d",&up[i].p);
}
}
void output(struct in up[],int n)
{
 int i;
 for(i=1;i<=n;i++)
 {
  printf("\n%d item code:%d",i,up[i].cod);
  printf("\nitem name:%s",up[i].name);
  printf("\nitem price:%d",up[i].p*10/100+up[i].p);
 }
}
void main()
{
 int i;
 input(s,3);
 output(s,3);
 getch();
}
/*OUTPUT=>1 item code:101
item name:abc
item price:1000
2 item code:102
item name:def
item price:2000
3 item code:103
item name:xyz
item price:3000

1 item code:101
item name:abc
item price:1100
2 item code:102
item name:def
item price:2200
3 item code:103
item name:xyz
item price:3300*/
