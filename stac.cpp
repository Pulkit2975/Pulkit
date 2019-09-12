#include<iostream>
#include<stdio>
#include<conio>

int top=-1;
int stack[];



void main()
{
int a,b;
cout<<"Enter 1 for push, 2 for pop, 3 to find length of array, 4 for exit"<<endl;
cin>>a;
Do{
switch(a)
{
case 1:cout<<"Enter number to push"<<endl;
       cin>>b;
       push(b);
case 2:pop();
case 3:findl();
}
while(a!=4);
}
}


void push(int x)
{
int len=stack.size();
if(top==len-1)
{
cout<<"overflow"<<endl;
}
else
{
stack[top]=x;
top=top+1;
}
}

void pop()
{
if(top==-1)
{
cout<<"underflow"<<endl;
}
else
{
stack[top]=NULL;
top=top-1;
}
return;
}

void findl()
{
    int x;
    while(top>=-1)
    {
        pop();
        x=x+1;
    }
    return x;
}



