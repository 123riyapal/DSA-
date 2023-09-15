#include<iostream>
int sumOfDigits(int n){
    if(n==0){
        return 0;
    }
    return n%10+sumOfDigits(n/10);
}
using namespace std;
int main(){
int Num;
cin>>Num;
int ans=sumOfDigits(Num);
cout<<"The sum of digits of a Num = "<<ans;
return 0;
}