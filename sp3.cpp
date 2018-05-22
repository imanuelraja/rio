#include<iostream>
int main()
{
 char str[50],i,c=0;
 cout<<"str:";
 cin>>str[i];
 for(i=0;str[i]!='\0';i++)
 {
  if((str[i]>='0')&&(str[i]<=9)||(str[i]>='a')&&(str[i]<='z'))
  {
   continue;
  }
  else
  { 
   c++;
   }
 }
} 
