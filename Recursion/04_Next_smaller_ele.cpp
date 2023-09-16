#include<iostream>
#include<stack>
#include<vector>
using namespace std;
vector<int> nextSmaller(int arr[],int n){
    stack<int> st;
    st.push(-1);
    vector<int> v(n,0);
    for(int i=n-1;i>=0;i--){
          while(st.top()>=arr[i]){
                st.pop();
            }
                v[i]=st.top();
        st.push(arr[i]);
    }
    return v;

}

int main(){
int arr[4]={2,1,4,3};
vector<int> ans =nextSmaller(arr,4); 
for(int i=0;i<ans.size();i++){
    cout<<ans[i]<<" ";
}
return 0;
}