#include<iostream>
using namespace std;
  float cal(float fx,int n)
    {
    	float fd=fx;
    	for(int i=1;i<n;i++)
    	
    		fd=fx*(fx-i);
    		return fd;
		
    	
	}
	
	int fact(int n)
	{
		int f=1;
		for(int i=2;i<=n;i++)
		f*=i;
		return f;
	}
int main()
{
    float x[20],y[20][20];
    int i,j,n;
    cout<<"enter number of data: "<<endl;
    cin>>n;
    cout<<"enter data: "<<endl;
    for(i=0;i<n;i++)
    {
        cout<<"x["<<i<<"]= ";
        cin>>x[i];
        cout<<"y["<<i<<"]= ";
        cin>>y[i][0];
    }

    
     for (int i = 1; i < n; i++)
	  {
        for (int j = 0; j < n - i; j++)
            y[j][i] = y[j+1][i-1] - y[j][i-1];
    }
      
    
    for(i=0;i<n;i++)
    {
 cout << x[i];
  for(j = 0; j < n-i ; j++)
  {
   cout << "\t" << y[i][j];
  }
  cout << endl;
 }
float value=1.1;
float sum=y[0][0];
float fx=(value-x[0])/(x[1]-x[0]);
for(int i=1;i<n;i++)
{
	sum=sum+(cal(fx,i)*y[0][i])/fact(i);
}
cout<<"\nValue at"<<value<<"is"<<sum<<endl;

 return 0;
    }




