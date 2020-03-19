	
#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int a, b, c, big;
	cout<<"Enter three numbers : ";
	cin>>a>>b>>c;
	//let a is the biggest
	big=a;
	if(big<b)
	{
		if(b>c)
		{
			big=b;
		}
		else
		{
			big=c;
		}
	}
	else if(big<c)
	{
		if(c>b)
		{
			big=c;
		}
		else
		{
			big=b;
		}
	}
	else
	{
		big=a;
	}
	cout<<"Biggest number is "<<big;
	getch();
}
