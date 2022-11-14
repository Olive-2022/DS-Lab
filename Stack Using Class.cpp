#include<bits/stdc++.h>
using namespace std;
#define n 5

class MyStack
{
private:

int a[n];
int top=-1;

public:

bool isEmpty()
{
if(top<=0)
{
return true;
}
else
{
return false;
}
}

bool isFull()
{
if(top==n-1)
{
return true;
}
else
{
return false;
}
}

int pop()
{
if(isEmpty())
{
cout<<"Stack is empty."<<endl;
}
else
{
int value=a[top];
top--;
return value;
}
}

void push(int data)
{
if(isFull())
{
cout<<"Stack Overflow."<<endl;
}
else
{
top++;
a[top]=data;
}
}

void print()
{
for(int i=top;i>=0;i--)
{
cout<<a[i]<<endl;
}
cout<<endl;
}
};

int main()
{
MyStack m;

m.push(10);
m.push(20);
m.push(30);
m.push(40);
m.push(50);
m.push(60);
m.push(70);
m.pop();
m.print();

return 0;
}

