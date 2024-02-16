#include<iostream>
#include<stack>
using namespace std;
bool validParanthesis(string s){
if(s.size()==0){
    return true;
}
stack<char>st;
for(int i=0;i<s.size();i++){
    char ch=s[i];
    if(s[i]=='('||s[i]=='{'||s[i]=='['){
        st.push(ch);
    }
    else{
        if(st.empty()==false){
            if((ch==')' && st.top()=='(')||(ch=='}' && st.top()=='{')||(ch==']' && st.top()=='[')){
                st.pop();
            }
            else{
                return false;
            }
        }
        else{
            return false;
        }
    }
}
if(st.empty()){
    return true;
}
else{
    return false;
}
}
int main(){
    string s;
    cin>>s;
    cout<<validParanthesis(s);
return 0;
}