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
void search(Node *&head,int ele){
    if(head==NULL){
        return;
    }
    Node *temp=head;
    int cnt=0;
    while(temp!=NULL && temp->data!=ele){
        temp=temp->next;
        cnt++;
    }
    if (temp != NULL && temp->data == ele) {
        cout << "Found element " << ele << " at position " << cnt << "." << endl;
    } else {
        cout << "Element " << ele << " not found in the linked list." << endl;
    }
    
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
    search(head,10);
}