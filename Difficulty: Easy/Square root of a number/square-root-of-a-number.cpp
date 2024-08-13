//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// Function to find square root
// x: element to find square root
class Solution {
  public:
    long long int floorSqrt(long long int n) {
        // Your code goes here
        long long ans;
        int l=0,h=n;
        while(l<=h){
            long long mid=(l+h)/2;
            if(mid*mid==n){
                ans=mid;
                break;
            }
            else if(mid*mid<n){
                l=mid+1;
                ans=mid;
            }
            else
            h=mid-1;
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        Solution obj;
        cout << obj.floorSqrt(n) << endl;
    }
    return 0;
}

// } Driver Code Ends