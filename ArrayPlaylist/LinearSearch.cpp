#include<iostream>
#include <cstdlib> 

using namespace std;
int main(){
    int n;
    cin>>n;
    int k;
    cin>>k;
    int arr[n]={0};
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int ans=-1;
    for(int i=0;i<n;i++){
        if(arr[i]==k){
        ans=i;
        break;
            system("pause");

    }
    }
    cout<<ans<<endl;
    
    return 0;
}