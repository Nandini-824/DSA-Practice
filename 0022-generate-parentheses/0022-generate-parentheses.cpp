class Solution {
public:
 vector<string> ans;
 
     void solve(int open, int close, int n, stack<char>& st) {
         // Complete string
        if (open == n && close == n) {
            string s;

            stack<char> temp = st;

            while (!temp.empty()) {
                s += temp.top();
                temp.pop();
            }

            reverse(s.begin(), s.end());

            ans.push_back(s);
            return;
        }

        // Add '('
        if (open < n) {
            st.push('(');
            solve(open + 1, close, n, st);
            st.pop();
        }

        // Add ')'
        if (close < open) {
            st.push(')');
            solve(open, close + 1, n, st);
            st.pop();
        }
    }

    vector<string> generateParenthesis(int n) {
        stack<char> st;

        solve(0, 0, n, st);

        return ans;
    }
};