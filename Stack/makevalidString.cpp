#include <iostream>
#include <stack>
using namespace std;

class Solution {
public:
    int minAddToMakeValid(string str) {
        stack<char> s;
        int unmatched = 0;

        for (char ch : str) {
            if (ch == '(') {
                s.push(ch);
            } else if (ch == ')') {
                if (!s.empty() && s.top() == '(') {
                    s.pop();
                } else {
                    unmatched++;
                }
            }
        }

        return unmatched + s.size(); // Add the remaining unmatched opening parentheses
    }
};

int main() {
    Solution solution;
    string input = "((((";
    int result = solution.minAddToMakeValid(input);
    cout << "Minimum additions needed: " << result << endl;
    return 0;
}
