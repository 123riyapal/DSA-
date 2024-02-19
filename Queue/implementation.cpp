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
    void push(int x){
        if(rear!=size){
            arr[rear++]=x;
        }
    }
    void pop(){
        if(front!=rear){
            front++;
        }
    }
    int Top(){
        if(front==rear)return -1;
        int top=arr[front];
        return top;
    }
    bool isFull(){
        if(rear==size-1)return true;
        return false;
    }
    bool isEmpty(){
        if(front==rear)return true;
        return false;
    }

};
int main(){
MyQueue queue(10);
queue.push(1);
cout<<queue.Top()<<endl;
queue.pop();
cout<<queue.Top()<<endl;


cout<<queue.isFull()<<endl;
cout<<queue.isEmpty()<<endl;




return 0;
}