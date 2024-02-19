#include<iostream>
using namespace std;

class MyQueue {
public:
    int *arr;
    int front;
    int rear;
    int size;

    MyQueue(int size) {
        arr = new int[size];
        this->size = size;
        front = 0;
        rear = 0;
    }

    void push(int x) {
        if (isFull()) {
            cout << "queue overflow" << endl;
        } else {
            arr[rear] = x;
            rear = (rear + 1) % size;
            cout << x << " pushed into the Queue" << "\n";
        }
    }

    void pop() {
        if (!isEmpty()) {
            front = (front + 1) % size;
        } else {
            cout << "Queue Underflow" << endl;
        }
    }

    int Top() {
        if (isEmpty()) return -1;
        int top = arr[front];
        return top;
    }

    bool isFull() {
        if ((rear + 1) % size == front) return true;
        return false;
    }

    bool isEmpty() {
        if (front == rear) return true;
        return false;
    }
};

int main() {
    MyQueue queue(10);
    queue.push(1);
    queue.push(2);
    queue.push(3);
    queue.push(4);
    queue.push(5);
    queue.push(6);
    queue.push(7);
    cout << queue.Top() << endl;
    queue.pop();
    queue.push(9);
    queue.push(1);
    queue.push(8);
    queue.pop();
    queue.push(8);

    cout << queue.Top() << endl;

    cout << "Is Full: " << queue.isFull() << endl;
    cout << "Is Empty: " << queue.isEmpty() << endl;

    return 0;
}
