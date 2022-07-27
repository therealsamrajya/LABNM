#include<iostream>
#include<stdlib.h>
#include<math.h>
using namespace std;
#define f(x) 3*x*x-6*x+2
int main()
{
	float x1,x2,x0,f1,f2,f0,e=1;
	cout<<"enter initial guess x1 and x2";
	cin>>x1>>x2;
	do
	{
		f1=f(x1);
		f2=f(x2);
		if(f1*f2>0)
		{
		
		cout<<"root doesnt occur";
	}
	else
	{
	
	x0=(x1+x2)/2;
	f0=f(x0);
	e=fabs((x2-x1)/x2);
	if(f1*f0<0)
	{
		x2=x0;
	}
	else
	{
		x1=x0;
	}
}
}
while(e>=0.0001&&f0!=0);
cout<<"the required value is="<<x0;
return 0;
}
