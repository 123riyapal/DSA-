#include<iostream>
using namespace std;
void lowerToUpperCase(string &s,int size){
if(size==-1){
return ;
}
else{
 s[size]=(s[size]+'A'-'a');
 lowerToUpperCase(s,size-1);
}
}
int main(){
    string s;
    cin>>s;
    lowerToUpperCase(s,s.size()-1);
        for(int i=0;i<s.size();i++){
        cout<<s[i];
    }

}