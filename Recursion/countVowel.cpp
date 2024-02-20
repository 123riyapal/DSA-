#include<iostream>
using namespace std;
int CountVowel(string s,int n){
    if(n==-1){
        return 0;
    }
    if((s[n]=='a'||s[n]=='e'||s[n]=='i'||s[n]=='o'||s[n]=='u')||(s[n]=='A'||s[n]=='E'||s[n]=='I'||s[n]=='O'||s[n]=='U')){
    return 1+CountVowel(s,n-1);
    }
    else
    return CountVowel(s,n-1);
}
int main(){
    string s;
    cin>>s;
    cout<<CountVowel(s,s.size()-1);
}