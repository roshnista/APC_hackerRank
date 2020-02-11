#include<iostream>
using namespace std;
struct node
{
int info;
node *link;
};
int main()
{
int i,k,key1,key2,item;
//struct node *start,*n,*ptr,*loc1,*loc2,*loc1p,*loc2p;

node *head=NULL,*ptr;

cin>>k;
for(i=1;i<=k;i++)
{
    cin>>item;
    node *p=(node *)malloc(sizeof(node));
    p->info=item;
    p->link=head;
    head=p;
    // if(head==NULL)
    // {  
    //     p->link=NULL;
    //     head=p;
    // }
    // else
    // {
    //     ptr=head;
    //     while(ptr->link!=NULL)
    //     {
    //         ptr=ptr->link;
    //     }
    //     ptr->link=p;
    //     p->link=NULL;

    // }
}
cin>>key1>>key2;
node *h1=head,*curr=head;
while(h1)
{
    cout<<h1->info<<" ";
    h1=h1->link;
}    
cout<<endl;

//swap
node *prev1=NULL,*prev2=NULL;
node *curr1=head,*curr2=head;

if(key1!=key2)
{
    while(curr1 && curr1->info!=key1)
    {
        prev1=curr1;
        curr1=curr1->link;
    }
    while(curr2 && curr2->info!=key2)
    {
        prev2=curr2;
        curr2=curr2->link;
    }
    if(curr1!=NULL && curr2!=NULL)
    {
        if(prev1!=NULL)
            prev1->link=curr2;
        else
            head=curr2;
        
        if(prev2!=NULL)
            prev2->link=curr1;
        else
            head=curr1;

        node *t=curr2->link;
        curr2->link=curr1->link;
        curr1->link=t;
    }
}
node *h2=head;  
while(h2)
{
    cout<<h2->info<<" ";
    h2=h2->link;
} 





return 0;
