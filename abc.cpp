#include<iostream>

using namespace std;

struct node
{
    int info;
    struct node *next, *prev;
};

struct node *start, *last;

void push(int a)
{
    struct node *n;
    n=new node();
    n->info=a;
    n->next=NULL;
    n->prev=NULL;

    if(start==NULL)
    {
        start=n;
        last=n;
    }
    else
    {

        n->next=start;
        start->prev=n;
        start=n;

    }
}


void disp()
{
    struct node *temp;
    if(start==NULL)
    {
        cout<<"empty list"<<endl;
    }
    else
    {
        temp=start;
        while(temp!=NULL)
        {
            cout<<temp->info<<endl;
            temp=temp->next;
        }
    }
}




int main()
{
  start=NULL;
  int x,y;
  do
{
    cout<<"Enter 1 for insert, 2 for display and 3 for exit"<<endl;
    cin>>x;
    switch(x)
    {
        case 1:cout<<"enter number to push"<<endl;
               cin>>y;
               push(y);
               break;
        case 2:disp();
    }
}while(x!=3);
    return 1;
}
