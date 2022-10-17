#include<bits/stdc++.h>
using namespace std;
int main()
{
int key,i,j;
int arr[7]={1,4,6,3,6,9,1}, flag[7];
cout<<"Enter the element of the array: ";
for(i=0; i<10; i++)
{
key = 1;
flag[i] = 0;
for(j=i+1; j<7; j++)
{
if(arr[i] == arr[j])
{
key++;
flag[j] = -1;
}
}
if(flag[i] == 0)
{
flag[i] = key;
}
}
for(i=0; i<7; i++)
{
if(flag[i] != -1)
{
cout<< arr[i] <<" occurs = " << flag[i] << " times."<<endl;
}
}
return 0;
}
