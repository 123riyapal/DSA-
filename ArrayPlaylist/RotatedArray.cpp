#include<iostream>
#include<vector>
using namespace std;
void leftRotateArrayByOne(vector<int> &v,int n){
    int temp=v[0];
    for(int i=1;i<n;i++){
        v[i-1]=v[i];
    }
    v[n-1]=temp;
}
void printArray(vector<int> &v,int n){
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
}
int main(){
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        int ele;
        cin>>ele;
        v[i]=(ele);
    }
    leftRotateArrayByOne(v,n);
    printArray(v,n);

}