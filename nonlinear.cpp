#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define e 2.718

int main()
{
   float x[10],y[10],n;
   printf("enter the number of term ");
   scanf("%f",&n);
   printf("enter the value of X:\n");
   for(int i=0;i<n;i++)
   {
       scanf("%f",&x[i]);
   }
   printf("enter the value of Y:\n");
   for(int i=0;i<n;i++)
   {
       scanf("%f",&y[i]);
   }
   float EX,EY,S=0,S1=0,X=0,Y=0;
   for(int i=0;i<n;i++)
   {
       X=X+(x[i]);
       Y=Y+log(y[i]);
       S=S+(x[i]*log(y[i]));
       S1=S1+x[i]*x[i];
   }
   float b,A,a;
   b=((n*S)-(X*Y))/((n*S1)-(X*X));
   printf("value of b :%f\n",b);
   A=(Y/n)-(b*(X/n));
   a=pow(e,A);
   printf("value of a :%f\n",a);
   printf("the fitted equation is %f + %fx",a,b);



}
