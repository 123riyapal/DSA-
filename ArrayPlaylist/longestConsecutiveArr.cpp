#include<iostream>
#include<algorithm>
#include<unordered_set>
using namespace std;
bool fun(int arr[],int x,int n){
    for(int i=0;i<n;i++){
        if(arr[i]==x){
            return true;
        }
    }
    return false;
}
int main(){
int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++){
cin>>arr[i];
}
// ****Brute Force Approach****
// int x=0;
// int cnt=0;
// int mx=0;
// for(int i=0;i<n;i++){
//     x=arr[i];
//     cnt=1;
//         while(fun(arr,x+1,n)==true){
//             x=x+1;
//             cnt++;
//         }
//     }

// cout<<cnt;
// ******Better Approach *****
// sort(arr,arr+n);
// int lastSmaller=INT_MIN;
// int longest=1;
// int cnt=0;
// for(int i=0;i<n;i++){
//     if(arr[i]-1==lastSmaller){
//         cnt=cnt+1;
//         lastSmaller=arr[i];
//     }
//     else if(arr[i]!=lastSmaller){
//         cnt=1;
//         lastSmaller=arr[i];
//     }
//     longest=max(longest,cnt);
// }
// cout<<longest;
// **********Optimal Approach *********

int longest=1;
unordered_set<int> s;
int cnt=0;
for(int i=0;i<n;i++){
    s.insert(arr[i]);
}
for(auto it:s){
    if(s.find(it-1)==s.end()){
        cnt=1;
        int x=it;
        while(s.find(x+1)!=s.end()){
            cnt++;
            x=x+1;

        }
    }
    longest=max(cnt,longest);
}
cout<<longest;
return 0;
}