#include<bits/stdc++.h>
using namespace std;
void deleteMiddleEle(stack<int> &s ,int count, int size){
    if(count==size/2){    
    s.pop();
    return ;
    }
    int ele=s.top();
    s.pop();
    deleteMiddleEle(s,count+1,size);
    s.push(ele);

}
int main(){
stack<int> s;
s.push(10);
s.push(12);
s.push(13);
s.push(14);
s.push(15);
deleteMiddleEle(s,0,s.size());
while (!s.empty())
{
    cout<<s.top()<<" ";
    s.pop();
}

    return 0;
}