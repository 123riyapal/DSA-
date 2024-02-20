#include<bits/stdc++.h>
using namespace std;
void insertSortEle(stack<int>&s,int ele){
    if(s.empty()||(!s.empty() && s.top()<ele)){
        s.push(ele);
        return ;
    }
    int n=s.top();
    s.pop();
    insertSortEle(s,ele);
    s.push(n);

}
void sortStack(stack<int> &s){
    if(s.empty()){
        return;
    }
    int ele=s.top();
    s.pop();
    sortStack(s);
    insertSortEle(s,ele);
}
int main(){
 stack<int> s;
    s.push(1);
    s.push(21);
    s.push(4);
    s.push(5);
    sortStack(s);
    while (!s.empty())
    {
        cout<<s.top()<<" ";
        s.pop();
    }
    

return 0;
}