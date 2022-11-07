#include<bits/stdc++.h>
using namespace std;

double *linspace(double low, double high, int n)
{
double h=(high-low)/(n-1);
double *a=new double[n];
a[0]=low;

for(int i=1;i<n;i++)
{
a[i]=a[i-1]+h;
}
return a;
}

double f(double n)
{
return n*n;
}

int main()
{
double *p=linspace(2,10,5);
 for(int i = 0; i < 5; i++)
{
cout<<p[i]<<" "<<f(p[i])<<"\n";
}
cout << endl;
return 0;
}
