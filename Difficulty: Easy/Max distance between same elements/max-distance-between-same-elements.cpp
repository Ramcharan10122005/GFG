//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int maxDistance(vector<int> &arr) {
        // Code here
        int maxDistance = 0;
        unordered_map<int, pair<int, int>> mpp;
        int n = arr.size();
        
        for(int i = 0; i<n; i++){
            if(mpp.find(arr[i]) == mpp.end()){
                mpp[arr[i]] = {i, i};
            }
            int key = arr[i];
            pair<int, int> p = mpp[key];
            int x = p.first;
            
            mpp[arr[i]] = {x, i};
        }
        
        for(auto it: mpp){
            maxDistance = max(maxDistance, (it.second.second-it.second.first));
        }
        return maxDistance;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input);

        stringstream s1(input);
        int num;
        while (s1 >> num) {
            arr.push_back(num);
        }

        Solution ob;
        cout << ob.maxDistance(arr) << endl;
    }
    return 0;
}
// } Driver Code Ends