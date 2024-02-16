#include<iostream>
#include<vector>
using namespace std;
void printArray(vector<int> &v,int n){
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
}

int main(){
    int n;
    cin>>n;
vector<int> arr(n);
for(int i=0;i<n;i++){
    int ele;
    cin>>ele;
    arr[i]=ele;
}
// OPTIMAL APPROACH 1
// int i=0;
// for(int j=0;j<n;j++){
//     if(arr[j]!=0){
//         arr[i]=arr[j];
//         i++;
//     }
// }
// for(int j=i;j<n;j++){
//     arr[j]=0;
// }printArray(arr,n);
// OPTIMAL APPROACH 2
int i=-1;
for(int j=0;j<n;j++){
    if(arr[j]==0){
        i=j;
        break;
    }
}
if(i==-1){
    printArray(arr,n);
    return 0;
}
for(int j=i+1;j<n;j++){
    if(arr[j]!=0){
        swap(arr[i],arr[j]);
        i++;
    }
}printArray(arr,n);
return 0;
}