#include<iostream>
#include<math.h>
using namespace std;

#define f(x) exp(-x)-3*x
#define g(x) -exp(-x)-3

int main()
{
    double xi,x,fi,gi,f=1,e=1;
    cout<< "enter the initial guess x0:";
    cin>>xi;
    while(e>=0.0001 && f!=0)
    {
        fi=f(xi);
        gi=g(xi);
        x=xi-(fi/gi); 
        f=f(x);
        e=fabs((x-xi)/x);
        xi=x;
    }
    cout<< "n the root of the equation="<<x;
    return 0;
}
