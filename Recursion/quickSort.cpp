#include<iostream>
using namespace std;
int pivotElement(int arr[],int start,int end){
    int pos=start;
    int ele=arr[end];
    for(int i=start;i<=end;i++){
        if(arr[i]<=ele){
            swap(arr[i],arr[pos]);
            pos++;
        }
    }
    return pos-1;
}
void quickSort(int arr[],int start,int end){
    if(start>=end){
        return;
    }else{
        int pivot=pivotElement(arr,start,end);
        quickSort(arr,start,pivot-1);
        quickSort(arr,pivot,end);
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
quickSort(arr,0,n-1);
printArray(arr,n);
return 0;
}