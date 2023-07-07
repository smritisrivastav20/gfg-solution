//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function template for C++

class Solution {
  public:
    int getMinDiff(int arr[], int n, int k) {
        // code here'
        sort(arr,arr+n);
        int ans=arr[n-1]-arr[0];
        int mini=arr[0]+k;
        int maxi=arr[n-1]-k;
        int mi,mx;
        for(int i=0;i<n;i++)
        {
            mi=min(mini,arr[i+1]-k);
            mx=max(maxi,arr[i]+k);
            if(mi<0)continue;
            ans=min(ans,mx-mi);
        }
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> k;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.getMinDiff(arr, n, k);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends