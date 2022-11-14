#include<bits/stdc++.h>
using namespace std;
#define n 5

int a[n];
int top=-1;

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

int main()
{
push(10);
push(20);
push(30);
push(40);
push(50);
push(60);
push(70);
print();

int result=pop();
print();



return 0;
}


