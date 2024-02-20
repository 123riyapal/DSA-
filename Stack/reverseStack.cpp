#include<iostream>
#include<stack>
#include<vector>
using namespace std;

int main(){
    stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
 // *reverse stack using O(n) space 

    vector<int> ans;
        while(s.empty()==false)
    {
        ans.push_back(s.top());
        s.pop();
    }

for(int i=0;i<ans.size();i++){
    cout<<ans[i]<<" ";
}    
// !reverse stack using O(1) space 

    // while(s.empty()==false)
    // {
    //     cout<<s.top()<<" ";
    //     s.pop();
    // }
    return 0;
}