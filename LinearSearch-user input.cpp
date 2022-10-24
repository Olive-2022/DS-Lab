#include <bits/stdc++.h>
using namespace std;

int linearSearch(int *m, int n, int item)
{
for (int i=0;i<n;i++)
  {
   if(m[i]==item)
   return i;
  }
return -1;
}

int main()
{
    int n;
    cout<<"Enter Array size: ";
    cin>>n;
    int *a=new int[n];

    cout<<"Enter Array elements: ";
    for(int i=0;i<n;i++)
    {
    cin>>a[i];
    }

    int item;
    cout<<"Enter a value for searching: ";
    cin>>item;

    int i=linearSearch(a,n,item);

    if(i==-1)
    {
    cout <<"Item not found.";
    }
    else
    {
    cout<<a[i]<<" found in "<<i<<" location";
    }

    return 0;
}
