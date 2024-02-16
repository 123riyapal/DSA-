#include<iostream>
using namespace std;
bool palindrome(string s,int i,int n){
    if(i>=n){
    return true;
    }
    if(s[i]==s[n])
    {
        return  palindrome(s,i+1,n-1);
    }
    return false;
}
int main(){
    string s;
    cin>>s;
    cout<<palindrome(s,0,s.size()-1);
}