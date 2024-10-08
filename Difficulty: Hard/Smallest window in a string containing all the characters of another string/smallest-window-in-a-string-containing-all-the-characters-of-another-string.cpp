//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    //Function to find the smallest window in the string s consisting
    //of all the characters of string p.
    string smallestWindow (string s, string p)
    {
        // Your code here
         vector<int> map(128,0);
        for(char c : p) map[c]++;
        
        int start = 0, end = 0, minStart = 0, minLen = INT_MAX, counter = p.size();
        
        while(end < s.size()){
            if(map[s[end]] > 0)
                counter--;
            map[s[end]]--;
            end++;
            
            while(counter == 0){
                if(end - start < minLen){
                    minStart = start;
                    minLen = end - start;
                }
                
                map[s[start]]++;
                if(map[s[start]] > 0)
                    counter++;
                
                start++;
            }
        }
        
        return minLen == INT_MAX ? "-1" : s.substr(minStart, minLen);
    }
};

//{ Driver Code Starts.
int main()
 {
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        string pat;
        cin>>pat;
        Solution obj;
        cout<<obj.smallestWindow(s, pat)<<endl;
        
    }
	return 0;
}
// } Driver Code Ends