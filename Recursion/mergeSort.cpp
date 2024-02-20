#include<iostream>
using namespace std;
void merge(int arr[],int start,int mid,int end){
    int i=start;
    int j=mid+1;
    int index=0;
    int arr2[end-start+1];
    while(i<=mid && j<=end){
        if(arr[i]<=arr[j]){
            arr2[index++]=arr[i++];
        }
        else{
            arr2[index++]=arr[j++];
        }
    }
    while(i<=mid){
            arr2[index++]=arr[i++];
        }
    
    while(j<=end){
    arr2[index++]=arr[j++];   
    }
    index=0;
    while(start<=end){
        arr[start]=arr2[index];
        start++;
        index++;
    }
}
void mergeSort(int arr[],int start,int end){
    if(start==end){
        return;
    }else{
        int mid=start+(end-start)/2;
        mergeSort(arr,start,mid);
        mergeSort(arr,mid+1,end);
        merge(arr,start,mid,end);
    }
}
void printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }
    cout<<endl;
}
int main(){
int n;
cin>>n;
int arr[n];
for (int i = 0; i < n; i++)
{
    cin>>arr[i];
}
mergeSort(arr,0,n-1);
printArray(arr,n);
return 0;
}