//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{
  public:
    int longestPalindromeSubseq(string s) {
        int n = s.size();
        vector<int> dp(n), dpPrev(n);
        for (int start = n - 1; start >= 0; start--) {
            dp[start] = 1;
            for (int end = start + 1; end < n; end++) {
                if (s[start] == s[end])
                    dp[end] = 2 + dpPrev[end - 1];
                else
                    dp[end] = max(dpPrev[end], dp[end - 1]);
            }
            dpPrev = dp;
        }
        return dp[n - 1];
    }
    int countMin(string str){
    //complete the function here
        return str.size()-longestPalindromeSubseq(str);
    }
};

//{ Driver Code Starts.
int main(){
    int t;
    cin >> t;
    while(t--){
        string str;
        cin >> str;
        Solution ob;
        cout << ob.countMin(str) << endl;
    }
return 0;
}


// } Driver Code Ends