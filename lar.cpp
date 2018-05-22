#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int large, arr[50], size, i;
	cout<<"size";
	cin>>size;
	cout<<"Enter array elem:";
	for(i=0; i<size; i++)
	{
		cin>>arr[i];
	}
	cout<<"largest num\n";
	large=arr[0];
	for(i=0; i<size; i++)
	{
		if(large<arr[i])
		{
			large=arr[i];
		}
	}
	cout<<large;
	getch();
}
