#include<stdio.h>
#include<conio.h>
void main()
{
 str a[20];
 int i,flag;
 printf("str");
 scanf("%s",a);
 for(i=0;a[i]!='\0';i++)
 {
  if(a[i]>='0' && a[i]<='9')
  {
   flag=1;
   printf("\n Yes");
  }
  else
  {
   flag=0;
   printf("\n No");
  }
  return 0;
 }
} 
 
