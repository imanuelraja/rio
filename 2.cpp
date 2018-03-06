#include <stdio.h>
int main(void) {
	int a[1000],i,j,t,lim;
	scanf("%d",&lim);
	for(i=0;i<lim;i++)
	scanf("%d",&a[i]);
	for(i=0;i<limit;i++)
	{
		for(j=0;j<limt;j++)
		{
			if(a[i]>a[j])
			{
				t=a[j];
				a[j]=a[i];
				a[i]=t;
			 }
			
		}
	}
	printf("%d\t",a[limit%2]);
	return 0;
}
