#include<stdio.h>
int strlength(char*);
void main()
{
 char str[20];
 int length;
 printf("Enter any string:\n");
 gets(str);
 length=strlength(str);
 printf("The length of given string%sis:%d",str,length);
 getch();
}
int strlength(char*p)
{
 int count=0;
 while(*p!='\0')
 {
  count++;
  p++;
  
 }
 return count;
}
/*OUTPUT=>
Enter any string:
sneha
The length of given stringsnehais:5
*/
