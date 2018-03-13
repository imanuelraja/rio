#include<iostream.h>
void main()
{
 int n,k,i,l;
 cin>>n>>k;
 if(n>k)
 {
  l=n;
 }
 else
 {
  l=k;
 }
 for(i=l;i>=2;i++)
 {
  if(n%i==0 && k%i==0)
  {
   cout<<i;
  }
}
return 0;
}
