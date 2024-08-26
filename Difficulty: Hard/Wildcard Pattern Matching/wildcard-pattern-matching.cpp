//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    /*You are required to complete this method*/
    bool check(int i, int j, string &pattern, string &str, vector<vector<int>> &dp) {
    if (i < 0 && j < 0) return true;
    if (i < 0 && j >= 0) return false;
    if (i >= 0 && j < 0) {
        for (int k = 0; k <= i; k++) {
            if (pattern[k] != '*') return false;
        }
        return true;
    }
    if (dp[i][j] != -1) return dp[i][j];
    if (pattern[i] == str[j] || pattern[i] == '?') {
        return dp[i][j] = check(i - 1, j - 1, pattern, str, dp);
    }
    if (pattern[i] == '*') {
        return dp[i][j] = check(i - 1, j, pattern, str, dp) | check(i, j - 1, pattern, str, dp);
    }
    return dp[i][j] = false;
}

/* You are required to complete this method */
int wildCard(string pattern, string str) {
    int i = pattern.size();
    int j = str.size();
    vector<vector<int>> dp(i, vector<int>(j, -1));
    return check(i - 1, j - 1, pattern, str, dp);
}
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string pat, text;
        cin >> pat;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cin >> text;
        Solution obj;
        cout << obj.wildCard(pat, text) << endl;
    }
}

// } Driver Code Ends