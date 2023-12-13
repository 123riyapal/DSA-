#include<iostream>
using namespace std;
int binarySearch(int arr[],int start,int key,int end){
    if(start>end){
        return -1;
    }
int mid=start+(end-start)/2;

if(arr[mid]==key)return mid;
else if(arr[mid]<key) return binarySearch(arr,mid+1,key,end);
else  return binarySearch(arr,start,key,mid-1);
}
int main(){
    int n;
    cin>>n;
    int *arr =new int[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int key;
    cin>>key;
    int result = binarySearch(arr, 0, key, n - 1);

    if (result != -1) {
        cout << "Element found at index " << result << endl;
    } else {
        cout << "Element not found" << endl;
    }
    delete[] arr;
    return 0;
}