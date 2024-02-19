#include<iostream>
using namespace std;
class MyQueue{
    public:
    int *arr;
    int front;
    int rear;
    int size;
    MyQueue(int size){
        arr=new int[size];
        this->size=size;
        front=0;
        rear=0;
    }
    void push(int x,int i){
        if((rear+1)%size!=front){
            arr[(rear+1)%size]=x;
            cout<<x<<" pushed index pos"<<i<<"\n";
        }
    }
    void pop(){
        if(front!=rear){
            front=(front+1)%size;
        }
    }
    int Top(){
        if(front==rear)return -1;
        int top=arr[front];
        return top;
    }
    bool isFull(){
        if(rear==front-1)return true;
        return false;
    }
    bool isEmpty(){
        if(front==rear)return true;
        return false;
    }

};
int main(){
MyQueue queue(10);
int i=0;
queue.push(1,i++);
queue.push(2,i++);
queue.push(3,i++);
queue.push(4,i++);
queue.push(5,i++);
queue.push(6,i++);
queue.push(7,i++);
cout<<queue.Top()<<endl;
queue.pop();
queue.push(9,i++);
queue.push(10,i++);
queue.push(8,i++);

cout<<queue.Top()<<endl;


cout<<queue.isFull()<<endl;
cout<<queue.isEmpty()<<endl;




return 0;
}