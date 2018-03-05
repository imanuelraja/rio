#include<stdio.h>
void main()
{
 int h[2],mins[2],i,min,hour,diff,res[2];
 for(i=0;i<2;i++)
 {
  scanf("%d %d",&h[i],&min[i]);
 }
 for(i=0;i<2;i++)
 {
  res[i]=(h[i]*60)+min[i];
 }
 if(res[0]>res[1])
 {
  diff=res[0]-res[1];
 }
 else
 {
  diff=res[1]-res[0];
 }
 h=diff/60;
 min=diff%60;
 printf("%d %d",h,min);
 return 0;
}
 
