#include<iostream>
using namespace std;
int sumOfArray(int i,int arr[],int size,int sum){
if(i==size){
    return sum ;
}
sum = sumOfArray(i+1,arr,size,sum+arr[i]);
return sum;

}

int main(){
int size;
cin>>size;
int arr[size];
for(int i=0;i<size;i++){
    cin>>arr[i];
}

int sum_Of_Arr=sumOfArray(0,arr,size,0);
cout<<sum_Of_Arr<<endl;
return 0;
}