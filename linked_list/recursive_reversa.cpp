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

node* reversal(node*head){
// base case
if(head==NULL or head->next=NULL){
    return head;
}
node *shead=reversal(head->next);
head->next->next=head;
head=head->next;
return shead;
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