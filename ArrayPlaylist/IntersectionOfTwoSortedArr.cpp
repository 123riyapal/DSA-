#include<iostream>
#include<vector>
using namespace std;
void printArray( vector<int>& v) {
    for (int num : v) {
        cout << num << " ";
    }
}

int main(){
    int n,m;
    cin>>n>>m;
    vector<int> arr1(n);
    vector<int> arr2(m);
    for(int i=0;i<n;i++){
        cin>>arr1[i];
    }
    for(int i=0;i<m;i++){
        cin>>arr2[i];
    }
    // BRUTE FORCE APPROACH
    // vector<int> uni;
    // vector<int> vis(m,0);
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<m;j++){
    //         if(arr1[i]==arr2[j] && vis[j]==0){
    //             uni.push_back(arr1[i]);
    //             vis[j]=1;
    //             break;
    //         }
    //         if(arr2[j]>arr1[i]){
    //             break;
    //         }
    //     }
    // }
    vector<int> ans;
    int i=0;
    int j=0;
    while(i<n && j<m){
        if(arr1[i]==arr2[j]){
            ans.push_back(arr1[i]);
            i++;
            j++;
        }
        else if(arr1[i]<arr2[j]){
            i++;
        }
        else{
            j++;
        }
    }
    printArray(ans);

}