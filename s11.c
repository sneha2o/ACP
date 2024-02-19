#include<stdio.h>
struct h
{
 char name[30];
 char add[20];
 int gra;
 int chr;
 int room;
};
void hotel();
struct h s[]={
 {"south point hert","maxico",3,300,167},
 {"Hotel moon rocket","los angels",2,500,150},
 {"tropicana casino & resort","los vegas",3,100,50},
 {"rajavir place & resort","india",4,100,50},
 };
 void main()
 {
  int i;
  char c;
  for(i=0;i<=3;i++)
  {
   printf("\n Hotel name:%s",s[i].name);
   printf("\n Address:%s",s[i].add);
   printf("\n Grade:%d",s[i].gra);
   printf("\n Charges:%d",s[i].chr);
   printf("\n No of room:%d",s[i].room);
  }
  hotel();
  getch();
 }
 void hotel()
 {
  int i,n=0;
  printf("\n Show Hotel Room Charges Lase Than:");
  scanf("%d",&n);
  for(i=0;i<=3;i++)
  {
   if(s[i].chr<n)
   {
   printf("\n %d.Hotel Name:%s",i+1,s[i].name);
   printf("\n Address:%s",s[i].add);
   printf("\n Grade:%d",s[i].gra);
   printf("\n Charges:%d",s[i].chr);
   printf("\n No of room:%d",s[i].room);
   }
  }
 }
/*OUTPUT=>
 Hotel name:south point hert
 Address:maxico
 Grade:3
 Charges:300
 No of room:167
 Hotel name:Hotel moon rocket
 Address:los angels
 Grade:2
 Charges:500
 No of room:150
 Hotel name:tropicana casino & resort
 Address:los vegas
 Grade:3
 Charges:100
 No of room:50
 Hotel name:rajavir place & resort
 Address:india
 Grade:4
 Charges:100
 No of room:50
 Show Hotel Room Charges Lase Than:500

 1.Hotel Name:south point hert
 Address:maxico
 Grade:3
 Charges:300
 No of room:167
 3.Hotel Name:tropicana casino & resort
 Address:los vegas
 Grade:3
 Charges:100
 No of room:50
 4.Hotel Name:rajavir place & resort
 Address:india
 Grade:4
 Charges:100
 No of room:50
 */
 
