//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++
class Solution {
  public:

    string removeDups(string str) {
        // Your code goes here
        string ans="";
        int s=str.size();
        vector<int>hash(26,-1);
        for(int i=0;i<s;i++){
            hash[str[i]-'a']++;
        }
        for(int i=0;i<s;i++){
            if(hash[str[i]-'a']!=-1){
                ans+=str[i];
                hash[str[i]-'a']=-1;
            }
            
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main() {

    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;

        Solution ob;
        cout << ob.removeDups(s) << "\n";
    }

    return 0;
}
// } Driver Code Ends