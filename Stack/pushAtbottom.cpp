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
int main(){
stack<int> s;
s.push(10);
s.push(11);
s.push(12);
s.push(13);
s.push(14);
int ele=9;
pushAtBottom(s,ele);
while(!s.empty()){
    cout<<s.top()<<" ";
    s.pop();
}
return 0;
}