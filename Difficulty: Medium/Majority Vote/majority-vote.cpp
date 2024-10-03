//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    // Function to find the majority elements in the array
    vector<int> findMajority(vector<int>& nums) {
        // Your code goes here.
          int mx = *max_element(nums.begin(), nums.end()); 
        //creating the hash vector of size max element and initializing it with 0.
        vector<int> hash_baby(mx+1,0);
        // creating ans vector
        vector<int> ans;
        // traversing through the nums(given vector) and mapping the votes.
        for(auto i = nums.begin(); i!= nums.end(); i++){
            hash_baby[*i]++;
        }
        
        int j = 0; //index
        //traversing through the hash table and pushing keys(index in this case i.e j) whose value is more than n/3
        for(auto i = hash_baby.begin(); i!= hash_baby.end(); i++,j++){
            if(*i > nums.size()/3){
                ans.push_back(j);
            }
        }
        //returning -1 is no element is majority(i.e ans vector is empty)
        if(ans.size()==0){
            ans.push_back(-1);
        }
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {

        string s;
        getline(cin, s);
        stringstream ss(s);
        vector<int> nums;
        int num;
        while (ss >> num) {
            nums.push_back(num);
        }
        Solution ob;
        vector<int> ans = ob.findMajority(nums);
        for (auto &i : ans)
            cout << i << " ";
        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends