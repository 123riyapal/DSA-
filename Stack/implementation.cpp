#include <iostream>
using namespace std;
class stack
{
public:
    int *arr;
    int top;
    int size;
    stack(int size)
    {
        this->size = size;
        top = -1;
        arr = new int[size];
    }
    void push(int data)
    {
        if (size - top > 1)
        {
            top++;
            arr[top] = data;
        }
        else
        {
            cout << "Stack overflow" << endl;
        }
    }
    void pop()
    {
        if (top >= 0)
        {
            top--;
            
        }
        else
        {
            cout << "stack underflow" << endl;
        }
    }
    int Top()
    {
        if (top >= 0 && top < size)
        {
            return arr[top];
        }
        return -1;
    }
    bool empty(){
        if(top == -1){
            return true;
        }
        return false;
    }
};
int main()
{
    stack st(5);
    st.push(1);
    st.push(11);
    st.push(12);
    st.push(13);
    st.push(122);
    st.push(12);
    cout<<st.Top()<<endl;
    while(!st.empty()){
        int ch = st.Top();
        cout<<ch<<" ";
        st.pop();
    }
    

}