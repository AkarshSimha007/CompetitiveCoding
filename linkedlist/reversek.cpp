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


node* reversek(node* &head,int k){
    node* prevptr=NULL;
    node* curptr=head;
    node* nextptr;
    int count=0;

    while(curptr!=NULL && count<k){
        nextptr=curptr->next;
        curptr->next=prevptr;
        prevptr=curptr;
        curptr=nextptr;
        count++;
    }

    if(nextptr!=NULL){
        head->next=reversek(nextptr,k);
    }
    return prevptr;
}



int main(){
    node* head=NULL;
    insert(head,10);
    insertHead(head,5);
    insert(head,15);
    insert(head,20);
    insert(head,25);
    insert(head,30);
    display(head);

    node* reversekhead=reversek(head,2);
    display(reversekhead);
}