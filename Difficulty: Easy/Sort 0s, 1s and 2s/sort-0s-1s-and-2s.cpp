//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    void sort012(vector<int>& arr) {
        // code here
        int z=0,o=0,t=0;
        for(int num:arr){
            if(num==0)
            z++;
            else if(num==1)
            o++;
            else
            t++;
        }
        int ind=0;
        while(z--){
            arr[ind++]=0;
        }
        while(o--){
            arr[ind++]=1;
        }
        while(t--){
            arr[ind++]=2;
        }
    }
};

//{ Driver Code Starts.
int main() {

    int t;
    cin >> t;
    cin.ignore();
    while (t--) {

        vector<int> a;
        string input;
        int num;

        getline(cin, input);
        stringstream s2(input);
        while (s2 >> num) {
            a.push_back(num);
        }
        Solution ob;
        ob.sort012(a);

        int n = a.size();
        for (int i = 0; i < n; i++) {
            cout << a[i] << " ";
        }

        cout << endl;
    }
    return 0;
}

// } Driver Code Ends