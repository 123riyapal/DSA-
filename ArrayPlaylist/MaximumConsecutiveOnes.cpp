#include<iostream>
using namespace std;

int main(){
    int arr[]={1,1,0,1,1,1,0,1,1};
    int count=0;
    int ans=0;
    for(int i=0;i<9;i++){
        if(arr[i]==1){
            count++;
        }
        else{
            ans=max(ans,count);
            count=0;
        }
    }
    cout<<ans; 
}