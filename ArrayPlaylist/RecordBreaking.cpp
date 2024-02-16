#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n]={0};
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int mx=-1;
    int ans=0;
    for(int i=0;i<n;i++){
        if(a[i]>mx && a[i]>a[i+1]){
            ans++;
        }
        mx=max(a[i],mx);
    }
    cout<<ans<<endl;
    return 0;
}