#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

class node{
public:
    int data;
    node* next;
    node(int data){
    this-> data=data;
    next=NULL;
    }
};
 
 void insertAtHead(node * &head,int data){
    if(head==NULL){
        head=new node(data);
        return;
    }

    node *n=new node(data);
    n->next=head;
    head=n;

 }

  void AtMiddle(node* &head,int data,int pos)
 {
   if(pos==0){
    insertAtHead(head,data);
   }
   else{
    node * temp=head;
    for(int i=1;i<pos;i++)
    temp=temp->next;
    node* n=new node(data);
    n->next=temp->next;
    temp->next=n;
   }
 }
void copylist (node *Y, node **Z)
{
    node *P, *Q;
    int temp;
    if (Y==NULL)
    {
        cout<<"the list is empty"<<endl;
        *Z=NULL;
    }
    else
    {
        P=Y;
        Q=*Z;
        while (P->next!=NULL)
        {
            temp=P->info;
            Q->info=temp;
            P=P->next;
            Q=Q->next;
        }
    }
}
node* mergesort(node * a,node *b)
    {
    //base case
    if(a==NULL)
    return b;

    if(b==NULL)
    return a;

    node*c;

    if(a->data< b->data){
        c=a; 
        c->=merge(a->next,b);
    }
    else{
        c=b;
        c->next=merge(a,b->next);
    }

    return c; 
}
void printll(node * head){
    while(head!=NULL){
        cout<<head->data<<"-->";
        head=head->next;
    }
    cout<<endl;
}

 int main(){
    node *head=NULL;
    insertAtHead(head,4);
    insertAtHead(head,2);
    insertAtHead(head,1);
    insertAtHead(head,6);
    insertAtHead(head,7);
    insertAtHead(head,9);
    printll(head);
    return 0;
 }