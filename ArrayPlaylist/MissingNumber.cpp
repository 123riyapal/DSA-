#include<iostream>
using namespace std;
    // BRUTE FORCE 

// int missingNumber(int arr[],int n){
//     for(int i=1;i<=n;i++){
//         bool fla=0;
//         for(int j=0;j<n-1;j++){
//             if(arr[j]==i){
//                 fla=1;
//                 break;
//             }
//         }
//         if(fla==0){
//             return i;
//         }
//     }
//     return -1;
// }

// BETTER APPROACH

// int missingNumber(int arr[],int n){
//     int hash[n+1]={0};
//     for(int i=0;i<n;i++){
//         hash[arr[i]]++;
//     }
//     for(int i=1;i<=n;i++){
//         if(hash[i]!=1){
//             return i;
//         }
//     }
//     return -1;
// }
// OPTIMAL APPROACH


int missingNumber(int arr[],int n){
    int xor1=0;
    for(int i=1;i<=n;i++){
        xor1=xor1^i;
    }
    int xor2=0;
    for(int i=0;i<n-1;i++){
        xor2=xor2^arr[i];
    }
    return xor1^xor2;
}
int main(){
    int n;
    cin>>n;
    int arr[n]={0};
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<missingNumber(arr,n);
    system("pause");
    return 0;
}