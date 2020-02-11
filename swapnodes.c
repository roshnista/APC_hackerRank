#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

struct ListNode {
    int data;
    struct ListNode *next;
};

typedef struct ListNode listnode;

listnode* listnode_new(int data) {
    listnode* node = (listnode *) malloc(sizeof(listnode));
    node->data = data;
    node->next = NULL;
    return node;
}

void addNode(listnode* A, int i){
    listnode* temp = listnode_new(i);
    listnode* t = A;
    while(t->next != NULL){
        t = t->next;
    }
    t->next = temp;
}
listnode *head=NULL;

void swapNodes(listnode **h, int x, int y)
{
    listnode *n1=*h;
    listnode *n2=*h;
    
    listnode *a1=NULL,*a2=NULL,*b1=NULL;



    while(n1 && n1->data!=x)
    {
        a1=n1;
        n1=n1->next;
    }

    while(n2 && n2->data!=y)
    {
        a2=n2;
        n2=n2->next;
    }

    if(a1 == NULL || a2==NULL)
        {}
    if(a1 != NULL)
        a1->next=n2;
    else
        *h=n2;
    if(a2!=NULL)
    {
        a2->next=n1;
    }
    else {
    *h=n1;
    }
    b1=n2->next;
    n2->next=n1->next;
    n1->next=b1;   
}

void printList(listnode *node)
{
    while(node !=NULL)
        {
            printf("%d\n",node->data);
            node=node->next;
        }
}

int main()
{
    int i,x;
    for(i=0;i<5;i++)
    {     
        scanf("%d",&x); 
        listnode *n=(listnode *)malloc(sizeof(listnode));
          n->data=x;  
        if(head==NULL)
        {
            head=n;
            n->next=NULL; 
        }
        else {
            listnode *ptr=head;
            
            while(ptr->next!=NULL)
                ptr=ptr->next;
        
        n->next=NULL; 
        ptr->next=n;
        }
    } 

    int a,b;
    scanf("%d%d",&a,&b);
    
    swapNodes(&head,a,b);
    printList(head);
    return 0;
