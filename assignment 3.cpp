#include<iostream>
#include<stdlib.h>

using namespace std;

struct node
{
    int info;
    struct node *next;
};

struct node *start;



void push(int a)
{
    struct node *n;
    n=(struct node*)sizeof(malloc(struct node,1));
    if(start==NULL)
    {
        n->info=a;
        n->next=start;
        start=n;
    }

}


void disp()
{
   struct node *temp;
   temp=start;
   while(temp!=NULL);
   {
       cout<<temp->info<<endl;
       temp=temp->next;
   }
}


int main()
{
int x,y,z;
cout<<"Enter 1) push, 2) display, 3) to exit"<<endl;
cin>>x;
do
{
    switch(x)
    {
        case 1:cout<<"Enter number to push"<<endl;
               cin>>y;
               push(y);
               break;
        case 2:disp();
               break;
    }
    z++;
    }while(x!=3);
    return z;
}



