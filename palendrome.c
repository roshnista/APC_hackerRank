
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

struct ListNode {
	int val;
	struct ListNode *next;
};

typedef struct ListNode listnode;

listnode* listnode_new(int val) {
	listnode* node = (listnode *) malloc(sizeof(listnode));
	node->val = val;
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
/*
 * Complete the function below.
 */
listnode* reverse(listnode *A)
{
    listnode *curr=A,*prev=NULL,*next=NULL;
    while(curr)
    {
        next=curr->next;
        curr->next=prev;

        prev=curr;
        curr=next;
    }
    return prev;
}
int isPalin(listnode* A)
{
    listnode *fp=A,*sp=A,*p1=A;
    while(fp && sp && fp->next)
    {
        fp=fp->next->next;
        sp=sp->next;
    }
    listnode *p2=reverse(sp);
    while(p1 && p2)
    {
        if(p1->val != p2->val)
            return 0;
        p1=p1->next;
        p2=p2->next;
    }
    return 1;

}

int main(){
