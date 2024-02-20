#include<iostream>
using namespace std;
int main(){
string s;
getline(cin,s);
int i=0;
string ans;
while(i<s.size()){
    
    if(s[i]!='.'&& i<s.size()){
        ans+=s[i];
    }
    else{
        ans+="[.]";
    }
    i++;
}cout<<ans;

return 0;
}