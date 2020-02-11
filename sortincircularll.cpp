#include<stdio.h>
#include<stdlib.h>

/* structure for a node */
struct node
{
  int data;
  struct node *next;
};
void sortedInsert(struct node** head_ref, struct node* n)
{
    struct node *curr=*head_ref,*c=*head_ref;
    if((*head_ref)==NULL)
    {
         (*head_ref)=n;
        n->next=n;
    }
    else
    {
        if(curr->data > n->data)
        {
            c=curr;
            while(c->next!=(*head_ref))
                c=c->next;
            c->next=n;
            n->next=*head_ref;
            *head_ref=n;
        }
        else 
        {
        
        
        while(curr->next!=(*head_ref) && curr->next->data < n->data)
        {
            curr=curr->next;
        }
        
        n->next=curr->next;
        curr->next=n;
    }
    }
    
}
void printList(struct node *start)
