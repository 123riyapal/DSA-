#include<iostream>
using namespace std;

int kadane(int arr[],int n){
    int currSum=0;
    int mxSum=0;
    for(int i=0;i<n;i++){
        currSum+=arr[i];
        if(currSum<0){
            currSum=0;
        }
        mxSum=max(currSum,mxSum);

    }
    return mxSum;
}
int main(){
    int n;
    cin>>n;
    int arr[n]={0};
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int wrapSum=0;
    int NonwrapSum=kadane(arr,n);
    int totalsum=0;
    int mx;
    for(int i=0;i<n;i++){
        totalsum+=arr[i];
        arr[i]=-arr[i];
    }
     wrapSum=totalsum+kadane(arr,n);
    mx=max(wrapSum,NonwrapSum);
    cout<<mx<<endl;
}