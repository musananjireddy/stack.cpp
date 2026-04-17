#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string makeGood(string s) {
        stack<char> st;
        
        for (char c : s) {
            if (!st.empty() && abs(st.top() - c) == 32) {
                st.pop();
            } else {
                st.push(c);
            }
        }

        string res;
        while (!st.empty()) {
            res = st.top() + res;
            st.pop();
        }

        return res;
    }
};

int main() {
    Solution obj;

    string s;
    cout << "Enter string: ";
    cin >> s;

    string result = obj.makeGood(s);

    cout << "Good string: " << result << endl;

    return 0;
}