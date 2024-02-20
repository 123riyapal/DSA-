#include<iostream>
using namespace std;
void reverseString(string& s, int start, int end) {
    if (start < end) {
        swap(s[start], s[end]);  // Swap characters at start and end indices
        reverseString(s, start + 1, end - 1);  // Recursive call with updated indices
    }
}

int main(){
    string s;
    cin>>s;

    reverseString(s,0,s.size()-1);
    for(int i=0;i<s.size();i++){
        cout<<s[i];
    }
}