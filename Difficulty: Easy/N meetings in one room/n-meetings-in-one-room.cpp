//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    // Function to find the maximum number of meetings that can
    // be performed in a meeting room.
    int maxMeetings(int n, int start[], int end[]) {
        // Your code here
        vector<pair<int,int>>meet;
        for(int i=0;i<n;i++){
            meet.emplace_back(end[i],start[i]);
        }
        sort(meet.begin(),meet.end());
        int ans=0,last_end_time=-1;
        for(auto m:meet){
            int cur_end_time = m.first; 
            int cur_start_time = m.second;
            if(cur_start_time>last_end_time){
                ans++;
                last_end_time=cur_end_time;
            }
        }
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int start[n], end[n];
        for (int i = 0; i < n; i++)
            cin >> start[i];

        for (int i = 0; i < n; i++)
            cin >> end[i];

        Solution ob;
        int ans = ob.maxMeetings(n, start, end);
        cout << ans << endl;
    }
    return 0;
}
// } Driver Code Ends