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
    int a[10] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 1};
    int item=50;

    int i=linearSearch(a,10,item);

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
