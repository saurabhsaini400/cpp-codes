#include<bits/stdc++.h>
using namespace std;
struct node{
    int data;
    node *next;
    node(int data){
        this->data=data;
        next=NULL;
    }
};
void create(node *&head , int data){
    if(head==NULL){
        node *n=new node(data);
        head=n;
        return;
        
    }
    node *tail;
    node *p=new node(data); 
    tail=head;
    while(tail->next!=NULL){
        tail=tail->next;
    }
    tail->next=p;
    
    return;

    
}
void display(node *head){
    
    while(head!=NULL){
        cout<<head->data<<" ";
        head=head->next;
    }
    return;
}
int main(){
    node *head=NULL;
    create(head,1);
    create(head,2);
    create(head,3);
    display(head);
    
    
    
    
    
    return 0;
}
