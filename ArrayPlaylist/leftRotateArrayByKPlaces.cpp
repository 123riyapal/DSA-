#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
// *****BRUTE FORCE APPROACH****
//EXTRA SPACE COMPLEXITY =0(K)
// TIME COMPLEXITY =O(K)+O(N-K)+O(K)=O(N+K)
// void leftRotateArrayByK(vector<int> &v,int n,int k){
//     int temp[k];
//     for(int i=0;i<k;i++){
//         temp[i]=v[i];
//     }
//     for(int i=k;i<n;i++){
//         v[i-k]=v[i];
//     }
//     int j=0;
//     for (int i = n-k; i < n; i++)
//     {
//         v[i]=temp[j];
//         j++;
//     }
    
// }
// OPTIMAL SOLUTION
//EXTRA SPACE COMPLEXITY =0(1)
//TIME COMPLEXITY =O(K)+O(N-K)+O(K)=O(N+K)

void leftRotateArrayByK(vector<int> &v,int n,int k){
    reverse(v.begin(),v.begin()+k);
    reverse(v.begin()+k,v.end());
    reverse(v.begin(),v.end());
    
}
void printArray(vector<int> &v,int n){
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
}
int main(){
    int n;
    cin>>n;
    int k;
    cin>>k;
    k=k%n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        int ele;
        cin>>ele;
        v[i]=(ele);
    }
    leftRotateArrayByK(v,n,k);
    printArray(v,n);

}