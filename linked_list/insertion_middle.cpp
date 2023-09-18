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

void printll(node * head){
    while(head!=NULL){
        cout<<head->data<<"-->";
        head=head->next;
    }
    cout<<endl;
}

//recursive
node * recreverse(node *head){
    //base cse
    if(head==NULL or head->next==Null)
    return head;
    else{
    node *shead=recreverse(head->next);
    head->next->next=head;
    head-<next=NULL;
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

