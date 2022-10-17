#include<bits/stdc++.h>
using namespace std;

int OddRange(int a,int b)
{
for(int i=a;i<=b;i++)
{
if(i%2!=0)
{
cout<<i<<" ";
}
}
}

int main()
{
int a,b;
cout<<"Starting value: ";
cin>>a;
cout<<"Ending value: ";
cin>>b;
OddRange(a,b);

return 0;
}
