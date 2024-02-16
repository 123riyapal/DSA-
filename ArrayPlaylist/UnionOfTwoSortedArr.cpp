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
    vector<int> uni;
    int i=0;
    int j=0;
    while(i<n && j<m){
        if(arr1[i]<=arr2[j]){
            if(uni.empty() || uni.back()!=arr1[i]){
                uni.push_back(arr1[i]);
            }
            i++;
        }
        else{
            if(uni.empty() || uni.back()!=arr2[j]){
                uni.push_back(arr2[j]);
            }
            j++;
        }
    }
        while (i < n) {
        if ( arr1[i] != uni.back()) {
            uni.push_back(arr1[i]);
        }
        i++;
    }

    // Add remaining elements of arr2 (if any)
    while (j < m) {
        if (arr2[j] != uni.back()) {
            uni.push_back(arr2[j]);
        }
        j++;
    }
    printArray(uni);
    return 0;

}