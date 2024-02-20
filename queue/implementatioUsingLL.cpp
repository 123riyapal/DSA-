#include<iostream>
using namespace std;
class Node{
public:
int val;
Node *next;

Node(int x){
    val=x;
    next=NULL;
}    
};
class queue{
Node *front;
Node *rear;
public:
queue(){
    front=rear=NULL;
}

void push(int x){
    if(isEmpty()){
        front=rear=new Node(x);
        return ;
    }
    else{
        rear->next=new Node(x);
        rear=rear->next;
    }
}
void pop(){
    if(isEmpty()){
        cout<<"Queue Underflow"<<endl;
    }
    else{
        Node *temp=front;
        front=front->next;
        delete temp;

    }
}
int Top(){
    if(isEmpty())return -1;
    return front->val;
}
bool isEmpty(){
    if(front==NULL)return true;
    return false;
}
};


int main(){
queue q;
q.push(1);
q.push(2);
q.push(3);
q.push(4);
q.push(5);
q.push(6);
q.pop();
cout<<q.Top()<<endl;
q.pop();
cout<<q.Top()<<endl;



return 0;
}
