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
void deletionAthead(Node *&head){
    if(head==NULL){
        return;
    }
    Node *temp=head;
    head=temp->next;
    temp->next=NULL;
    free(temp);

}
void deletionAtLast(Node *&head){
    if(head==NULL){
        return;
    }
    Node *temp=head;
    while(temp!=NULL && temp->next->next!=NULL){
        temp=temp->next;
    }
    Node *second_last=temp->next;
    temp->next=NULL;
    free(second_last);
} 
void deletionAtPos(Node *&head ,int pos){
if(pos==0){
    deletionAthead(head);
    return ;
}
Node *temp=head;
int curr_pos=0;
while(curr_pos!=pos-1){
temp=temp->next;
curr_pos++;
}
Node *freeNode = temp->next;
temp->next=temp->next->next;
free(freeNode);
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
    Node *head=NULL;
    pushHead(8,head);
    pushHead(2,head);
    pushHead(3,head);
    pushHead(4,head);
    pushHead(5,head);
    pushHead(0,head);
    print(head);
    // deletionAthead(head);
    // print(head);
    deletionAtPos(head,6);
    print(head);
    
    
    return 0;
}