#include<bits/stdc++.h>
using namespace std;
int main()
{
int m,n,l=0;
int a[6]={1,4,6,3,6,9};
int b[6]={5,3,7,1,2,6};
int c[6];

for(int i=0;i<6;i++)
{
for(int j=0;j<6;j++)
if(a[i]==b[j])
{
c[l]=b[j];
l++;
}
}
if(l==0)
{
cout<<"No common element!";
}
else
{
for(int i=0;i<l;i++)
{
cout<<c[i]<<" ";
}
}
return 0;
}
