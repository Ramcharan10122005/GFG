//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:

    bool kPangram(string s, int k) {
        // code here
        if(s.size() < 26) return false;
        vector<int> freq(26, 0);
        
        for(int i=0; i<s.size(); i++){
            if(isalpha(s[i])){
                freq[s[i]-'a']++;
            }
        }
        
        int nonExistCnt = 0;
        int existCnt = 0;
        for( int i : freq){
            if(i>0) existCnt+=i;
            else nonExistCnt++;
        }
        
        if(existCnt >= 26 && nonExistCnt <= k){
            return true;
        }
        return false;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        cin.ignore();
        string str;
        getline(cin, str);

        int k;
        cin >> k;

        Solution ob;
        bool a = ob.kPangram(str, k);
        if (a)
            cout << "true" << endl;
        else
            cout << "false" << endl;
    }
    return 0;
}
// } Driver Code Ends