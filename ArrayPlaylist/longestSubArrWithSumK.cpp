#include<bits/stdc++.h>
using namespace std;
int main(){
int arr[]={1,2,3,1,1,1,1};
int n=7;
int sum=0;
int len=0;
int K=3;
// ****Brute Force Approach****
// for(int i=0;i<n;i++){
//     int sum=0;
//     for(int j=i;j<n;j++){
//         sum+=arr[j];
//         if(sum==K){
//             len=max(len,(j-i)+1);
//         }
//     }
// }
//  ***** better Approach *****

unordered_map<int ,int> mpp;
for(int i=0;i<n;i++){
    sum+=arr[i];
    if(sum==K){
        len=max(len,i+1);
    }
    int rem=sum-K;
    if(mpp.find(rem)!=mpp.end()){
        int llen=i-mpp[rem];
        len=max(len,llen);
    }
    mpp[sum]=i;
}
cout<<len<<endl;

return 0;
}