#include<stdio.h>
struct emp
{
 char name[10];
 int p;
 int dl;
 int hr;
 int ns;
 
}employee[5];
void input(struct emp up[],int n)
{
 int i;
 for(i=0;i<n;++i)
 {
  printf("\n Employee Name:");
  scanf("%s",up[i].name);
  
  printf("Basic pay:");
  scanf("%d",&up[i].p);
  
  printf("Dearness Allowance:");
  scanf("%d",&up[i].dl);
  
  printf("House Rent:");
  scanf("%d",&up[i].hr);
  
  printf("Net Salary:");
  scanf("%d",&up[i].ns);
  
 }
}
void output(struct emp up[],int n)
{
 int i,j,k;
 for(i=0;i<n;++i)
 {
  for(j=i+1;j<n;++j)
  {
   if(up[i].ns<up[j].ns)
   {
    k=up[i].ns;
    up[i].ns=up[j].ns;
    up[j].ns=k;
   }
  }
 }
 for(i=0;i<n;++i)
 {
  printf("\n\nEmployee Name:%s,",up[i].name);
  printf("Basic pay:%d,",up[i].p);
  printf("Dearness Allowance:%d,",up[i].dl);
  printf("House Rent:%d,",up[i].hr);
  printf("Net Salary:%d,",up[i].ns);
  
 }
}
void main()
{
 int i;
 input(employee,5);
 output(employee,5);
 getch();
}
/*OUTPUT=>
 Enter Employee Name: Alice
Enter Basic pay: 10000
Enter Dearness Allowance: 2000
Enter House Rent: 3000
Enter Net Salary: 15000

Enter Employee Name: Bob
Enter Basic pay: 8000
Enter Dearness Allowance: 1000
Enter House Rent: 2000
Enter Net Salary: 12000

Enter Employee Name: Charlie
Enter Basic pay: 12000
Enter Dearness Allowance: 3000
Enter House Rent: 4000
Enter Net Salary: 18000

Enter Employee Name: David
Enter Basic pay: 9000
Enter Dearness Allowance: 1500
Enter House Rent: 2500
Enter Net Salary: 13500

Enter Employee Name: Eve
Enter Basic pay: 7000
Enter Dearness Allowance: 500
Enter House Rent: 1500
Enter Net Salary: 9000


Employee Name: Charlie, Basic pay: 12000, Dearness Allowance: 3000, House Rent: 4000, Net Salary: 18000

Employee Name: Alice, Basic pay: 10000, Dearness Allowance: 2000, House Rent: 3000, Net Salary: 15000

Employee Name: David, Basic pay: 9000, Dearness Allowance: 1500, House Rent: 2500, Net Salary: 13500

Employee Name: Bob, Basic pay: 8000, Dearness Allowance: 1000, House Rent: 2000, Net Salary: 12000

Employee Name: Eve, Basic pay: 7000, Dearness Allowance: 500, House Rent: 1500, Net Salary: 9000

*/
