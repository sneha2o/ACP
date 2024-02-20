#include<stdio.h>
struct data
{
 char state[10];
 int eng_col;
 int med_col;
 int mamg_col;
 int uni;
 int total;
};
void main()
{
 struct data r[3];
 int i,hc=0,x=0;
 for(i=0;i<2;i++)
 {
  printf("\n state:");
  scanf("%s",r[i].state);
  printf("Engineering Colleges:");
  scanf("%d",&r[i].eng_col);
  printf("Medical Colleges:");
  scanf("%d",&r[i].med_col);
  printf("Management Colleges:");
  scanf("%d",&r[i].mamg_col);
  printf("Univrsities:");
  scanf("%d",&r[i].uni);
  r[i].total=r[i].eng_col+r[i].med_col+r[i].mamg_col+r[i].uni;
  printf("\n Total:%d",r[i].total );
  if(i>0)
  {
   if(r[i].total>hc)
   {
    hc=r[i].total;
    x=i;
    
    }
   }
   else
   {
    hc=r[i].total;
    x=i;
   }
  }
  printf("\nState having maximum colleges");
  printf("\nState:%s",r[x].state);
  printf("\nEngineering Colleges:%d",r[x].eng_col);
  printf("\nMedical Colleges:%d",r[x].med_col);
  printf("\nManagement Colleges:%d",r[x].mamg_col);
  printf("\nUnivrsities:%d",r[x].uni);
  printf("\nTotal Colleges:%d",r[x].total);
  getch();
 }
 
 /*OUTPUT=>state:abc
Engineering Colleges:20
Medical Colleges:22
Management Colleges:33
Univrsities:40

 Total:115
 state:xyz
Engineering Colleges:44
Medical Colleges:22
Management Colleges:44
Univrsities:66

 Total:176
State having maximum colleges
State:xyz
Engineering Colleges:44
Medical Colleges:22
Management Colleges:44
Univrsities:66
Total Colleges:176
*/


















