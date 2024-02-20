#include<iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node(int data){
        this->data=data;
        this->next=NULL;
    }
};
void pushHead(int data ,Node *&head){
        Node *newNode = new Node(data);
        if(head==NULL){
            head=newNode;
            return;    
        }
        newNode->next=head;
        head=newNode;

}
void pushTail(Node *&tail,Node *&head,int data){
    Node *newNode=new Node(data);
    if(tail==NULL){
        tail=newNode;
    }
    tail->next=newNode;
    tail=newNode;
}
void pushAtKPos(Node *&head,int data,int k){
    Node *temp=head;
    Node *newNode = new Node(data);
    if(head==NULL){
        head=newNode;
        return ;
    }
    int cnt=1;
    while(temp!=NULL && cnt<k){
        temp=temp->next;
        cnt++;
    }
    newNode->next=temp->next;
    temp->next=newNode;
}
    void print(Node *&head){
        Node *temp=head;
        while(temp!=NULL){
            cout<<temp->data<<"-> ";
            temp=temp->next;
        }
        cout<<"NULL"<<endl;
    }


int main(){
    Node *node1=new Node(10);
    Node* head=NULL;
    // Node *tail=node1;
    // pushTail(tail,head,1);
    // pushTail(tail,head,2);
    // pushTail(tail,head,3);
    // pushTail(tail,head,4);
    // pushTail(tail,head,5);
    // pushTail(tail,head,6);
    // cout<<tail->data<<endl;
    // cout<<head->data<<endl;
    pushAtKPos(head , 2 ,0);
    pushAtKPos(head , 1 ,1);
    pushAtKPos(head , 4 ,2);
    pushAtKPos(head , 5 ,1);


    print(head);
    
    return 0;
}