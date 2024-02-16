#include<bits/stdc++.h>
using namespace std;
void maxLength(int arr[],int n){
    int mx=INT_MIN;
    int sum=0;
    for(int i=0;i<n;i++){
        mx=max(mx,arr[i]);
        cout<<mx<<endl;
    }
}

int main(){
int n;
cin>>n;
int arr[n]={0};
for(int i=0;i<n;i++){
    cin>>arr[i];
}
maxLength(arr,n);
return 0;
}