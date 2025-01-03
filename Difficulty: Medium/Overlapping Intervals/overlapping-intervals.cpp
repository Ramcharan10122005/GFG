//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    vector<vector<int>> mergeOverlap(vector<vector<int>>& arr) {
        // Code here
        vector<vector<int>>ans;
        sort(begin(arr),end(arr));
        int n=arr.size();
        int j=0;
        while(j<n-1){
            if(arr[j][1]<arr[j+1][0]){
                ans.push_back(arr[j]);
                j++;
            }
            else{
                auto t=arr[j];
                j++;
                while(j<n&&t[1]>=arr[j][0]){
                    t[0]=min(arr[j][0],t[0]);
                    t[1]=max(arr[j][1],t[1]);
                    j++;
                }
                ans.push_back(t);
            }
        }
        while(j<n){
            ans.push_back(arr[j]);
            j++;
        }
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n;
        cin >> n;
        vector<vector<int>> arr(n);
        for (int i = 0; i < n; i++) {
            int x, y;
            cin >> x >> y;
            arr[i].push_back(x);
            arr[i].push_back(y);
        }
        Solution obj;
        vector<vector<int>> ans = obj.mergeOverlap(arr);
        for (auto i : ans) {
            for (auto j : i) {
                cout << j << " ";
            }
        }
        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends