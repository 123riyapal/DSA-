#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> v;
    for(int i=0;i<n;i++){
        int ele;
        cin>>ele;
        v.push_back(ele);
    }
    int i=0;
    for(int j=1;j<n;j++){
        if(v[i]!=v[j]){
            v[i+1]=v[j];
            i++;
        }
    }
    cout<<i+1<<endl;
    for(int k=0;k<i+1;k++){
        cout<<v[k]<<endl;
    }
}