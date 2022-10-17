#include<bits/stdc++.h>
using namespace std;
int main()
{
int arr[10]={8,4,6,1,6,9,6,1,9,8},number,flag=0;
cout<<"Input a number to search : ";
cin>>number;
for(int i=0;i<10;i++)
{
if(arr[i]==number)
{
flag++;
}
}
if(flag==0)
{
cout<<"The number not found";
}
else
{
cout<<"The number occurs "<<flag<<" times in the array";
}
return 0;
}

