#include<iostream>
#include<stack>
using namespace std;
void pushAtBottom(stack<int> &s,int ele){
    if(s.empty()){
        s.push(ele);
        return;
    }
    int Top=s.top();
    s.pop();
    pushAtBottom(s,ele);
    s.push(Top);
}
void reverseStack(stack<int> &s){
if(s.empty()){
    return ;
}
int ele=s.top();
s.pop();
reverseStack(s);
pushAtBottom(s,ele);
}
int main(){
stack<int> st;
st.push(10);
st.push(11);
st.push(12);
st.push(13);
st.push(14);
st.push(15);
reverseStack(st);
while (!st.empty())
{
    cout<<st.top()<<" ";
    st.pop();
}

return 0;
}