#include<iostream>
#include<stack>
using namespace std;
bool isRedundant(string s){
    stack<char> st;
    for(int i=0;i<s.size();i++){
        if(s[i]=='(' || s[i]=='+'||s[i]=='-'||s[i]=='/'|| s[i]=='*'){
            st.push(s[i]);
        }
        else {
            if(s[i]==')'){
                bool isRed=true;
                while (!st.empty() && st.top()!='(')
                {
                if(st.top()=='+' || st.top()=='-'||st.top()=='*'||st.top()=='/'){
                 isRed=false;  
                }
                st.pop();
                }
                st.pop();                

                if(isRed==true){
                return true;
                }
            }

        }
    }
    return false;
}
int main(){
    string s="(a+(a*b)))";
    cout<< isRedundant(s);
return 0;
}