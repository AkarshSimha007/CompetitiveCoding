#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;
    node(int val){
        data=val;
        next=NULL;
    }
};

void insert(node* &head,int val){
    node* n=new node(val);
    if(head==NULL){
        head=n;
        return;
    }
    node* temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=n;
}

void insertHead(node* &head,int val){
    node* n=new node(val);
    if(head==NULL){
        head=n;
    }
    n->next=head;
    head=n;
}

void display(node* head){
   node* temp=head;
   while(temp!=NULL){
       cout<<temp->data<<"->";
       temp=temp->next;
   }
   cout<<"NULL"<<endl;
}

void deletenode(node* &head,int val){
    if(head==NULL){
        return;
    }
    node* temp=head;
    while(temp->next->data!=val){
        temp=temp->next;
    }
    node* todelete=temp->next;
    temp->next=temp->next->next;
    delete todelete;
}

node* reverse(node *head){
    node* prevptr=NULL;
    node* curptr=head;
    node* nextptr;

    while(curptr!=NULL){
        nextptr=curptr->next;
        curptr->next=prevptr;
        prevptr=curptr;
        curptr=nextptr;
    }
    return prevptr;
}

int main(){
    node* head=NULL;
    insert(head,10);
    insertHead(head,5);
    insert(head,15);
    insert(head,20);
    display(head);
    // deletenode(head,10);
    // display(head);
    node* newhead=reverse(head);
    display(newhead);
}