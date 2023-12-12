#include<bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    int arr[26] = {0};

    // Count occurrences without sorting
    for (int i = 0; i < s.size(); i++) {
        arr[s[i] - 'a']++;
    }

    int ans = 0;
bool oddCount=false;
    // Calculate palindrome length
    for (int i = 0; i < 26; i++) {
        if ((arr[i]) % 2 == 0) {
            ans += arr[i];
        }  else {
            ans += arr[i] - 1;
            oddCount=true;
        }
    }
    if(oddCount)
    ans+=1;
    cout << ans;

    return 0;
}