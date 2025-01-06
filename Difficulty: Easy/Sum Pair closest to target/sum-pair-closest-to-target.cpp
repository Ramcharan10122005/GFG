//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++
class Solution {
  public:
    vector<int> sumClosest(vector<int>& nums, int target) {
        // code here
        if(nums.size()<2)return {};
        sort(nums.begin(),nums.end());
        int sum=nums[0]+nums[1];
        int diff=INT_MAX;
        int a=nums[0],b=nums[1];
            int start=0,end=nums.size()-1;
            while(start<end){
                int currSum=nums[start]+nums[end];
                if(currSum==target)return {nums[start],nums[end]};
                int currDiff=abs(currSum-target);
                if(currDiff<diff){
                    sum=currSum;
                    diff=currDiff;
                    a=nums[start],b=nums[end];
                }
                if(currSum>target)end--;
                else start++;
            }
        
        return {a,b};
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
        string ks;
        getline(cin, ks);
        int target = stoi(ks);
        Solution ob;
        vector<int> ans = ob.sumClosest(arr, target);
        if (ans.empty()) {
            cout << "[]";
        } else {
            for (auto it : ans) {
                cout << it << " ";
            }
        }
        cout << endl;
        cout << "~\n";
    }

    return 0;
}
// } Driver Code Ends