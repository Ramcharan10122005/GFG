//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    int rotateDelete(vector<int> &arr) {
        // Your code here
        int sz = arr.size(); // Initial size of the array
    
    for (int k = 1; k <= sz / 2; k++) {
        int n = arr.size();
        
        // Move the last element to the front
        int lastElement = arr[n - 1];
        arr.pop_back(); // Remove the last element
        arr.insert(arr.begin(), lastElement); // Insert it at the front
        
        // Remove element at position (n - k)
        int deleteIndex = n - k;
        if (deleteIndex < arr.size()) {
            arr.erase(arr.begin() + deleteIndex);
        }
    }
    
    return arr[0]; // Return the first element
    }
};


//{ Driver Code Starts.

int main() {
    string ts;
    getline(cin, ts);
    int t = stoi(ts);
    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        Solution obj;
        int res = obj.rotateDelete(arr);
        cout << res << endl;
        // string tl;
        // getline(cin, tl);
    }
    return 0;
}

// } Driver Code Ends