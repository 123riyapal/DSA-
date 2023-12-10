#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;

int arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
}
// Brute Force Approach 
 int mx = 0;

    for (int i = 0; i < n; i++) {
        int minHeight = arr[i];
        for (int j = i; j < n; j++) {
            minHeight = min(minHeight, arr[j]);
            int width = j - i + 1;
            int area = minHeight * width;
            mx = max(mx, area);
        }
    }

cout<<mx;
return 0;
}