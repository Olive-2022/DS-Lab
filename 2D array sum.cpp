#include<bits/stdc++.h>
using namespace std;

int main()
{
int a[3][3];
int b[3][3];
int c[3][3];
int r[3][3];

for(int i; i<3;i++)
{
for(int j=0;j<3;j++)
{
cin>>a[i][j];
}
}

for(int i; i<3;i++)
{
for(int j=0;j<3;j++)
{
cin>>b[i][j];
}
}

for(int i; i<3;i++)
{
for(int j=0;j<3;j++)
{
cin>>c[i][j];
}
}

for(int i; i<3;i++)
{
for(int j=0;j<3;j++)
{
r[i][j]=a[i][j]+b[i][j]+c[i][j];
}
}
cout<<"Summation: "<<endl;

for(int i; i<3;i++)
{
for(int j=0;j<3;j++)
{
cout<<r[i][j]<<" ";
}
}
return 0;
}




