#include<iostream>
#include<math.h>
#include<iomanip>
#include<conio.h>
using namespace std;
float func(float x,float y);
main()
{
	int i,n;
	float x,y,xp,h,m1,m2;
	float func(float,float);
	cout<<endl;
	cout<<"enter initial values of x and y"<<endl;
	cin>>x>>y;
	cout<<"input x at which y is required"<<endl;
	cin>>xp;
	cout<<"enter stepsize(h):"<<endl;
	cin>>h;
	n=(int)((xp-x)/h+0.5);
	for(i=1;i<=n;i++)
	{
	m1=func(x,y);
	m2=func(x+h,y+m1*h);
		x=x+h;
		y=y+0.5*h*(m1+m2);
		cout<<setw(5)<<i<<setw(10.6)<<x<<setw(10.6)<<y<<endl;
		
	}
	cout<<"the value of y at x="<<x<<" is "<<y<<endl;
	getch();
	
	
}
float func(float x,float y)
{
	float f;
	f=2*y/x;
	return(f);
}
