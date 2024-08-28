//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    // Complete this function
    // Function to sort the array according to frequency of elements.
    vector<int> sortByFreq(vector<int>& arr) {
    unordered_map<int, int> mp;
    for (int n : arr) {
        mp[n]++;
    }
    
    vector<pair<int, int>> freqVec;
    for (const auto& p : mp) {
        freqVec.push_back({p.first, p.second});
    }

    auto compare = [](const pair<int, int>& p1, const pair<int, int>& p2) {
        if (p1.second != p2.second) {
            return p1.second > p2.second; 
        }
        return p1.first < p2.first; 
    };
    sort(freqVec.begin(), freqVec.end(), compare);
    vector<int> result;
    for (const auto& p : freqVec) {
        result.insert(result.end(), p.second, p.first);
    }
    
    return result;
}
};

//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    cin.ignore();
    while (t--) {

        string input;
        int num;
        vector<int> arr;

        getline(cin, input);
        stringstream s2(input);
        while (s2 >> num) {
            arr.push_back(num);
        }
        Solution obj;
        vector<int> v;
        v = obj.sortByFreq(arr);
        for (int i : v)
            cout << i << " ";
        cout << endl;
    }

    return 0;
}

// } Driver Code Ends