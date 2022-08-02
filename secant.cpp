#include<iostream>
#include<math.h>
using namespace std;
#define f(x) cos(x)+2*sin(x)+x*x
int main()
{
	float x1,x2,x0,f1,f2,f0=1,e=1;
	cout<<"enter initial guess";
	cin>>x1>>x2;
	while(e>0.01 && f0!=0)
{

f1=f(x1);
f2=f(x2);
x0=(x1*f2-x2*f1)/(f2-f1);
f0=f(x0);
e=fabs((x2-x1)/x2);
x1=x2;
x2=x0;
}
cout<<"nth root of equation"<<x0;
return 0;
}
