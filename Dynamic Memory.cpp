#include <bits/stdc++.h>
using namespace std;

class Stack
{
private:
    int top;
    int *a;
    int s;

public:
    Stack(int n)
    {
    top-1;
    s=n;
    a=new int[n];
    }

bool isEmty()
{
if(top<=0)
{
return true;
}
}
int pop()
{
if(isEmty())
{
cout<<"Stack is empty"<<endl;
}
else
{
int value= a[top];
top--;
return value;
}
}

bool isFull()
{
if(top==s-1)
{
return true;
}
return false;
}

void push(int data)
{
if(isFull())
{
cout<<"Stack Overflow"<<endl;
}
else
{
top++;
a[top]=data;
}
}

void print()
{
for(int i=top; i>=0; i--)
{
cout<<a[i]<<endl;
}
cout<<"\n";
}

};

int a[5];
int top= -1;

int main()
{

/*push(10);
push(20);
push(30);
push(40);
push(50);
push(60);
push(60);
print();*/

//push(10);
//push(20);
//print();

//int result1=pop();
//int result2=pop();
//cout<<top<<endl;
//cout<<endl;
//print();

/*push(10);
push(20);
pop();
pop();
pop();
pop();*/

int n;
cout<<"Enter the size of the Stack: ";
cin>>n;

Stack s(n);
s.push(100);
s.push(200);
s.push(200);
s.print();

return 0;
}


