//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{   
public:
    int lengthOfLongestAP(int A[], int n) {
       int ans=1;
       unordered_set<int>dp(A,A+n);
       for(int i=0;i<n;i++){
       for(int j=i+1;j<n;j++)
       {
           int len=2,curr=2*A[j]-A[i],diff=A[j]-A[i];
       while(dp.find(curr)!=dp.end())
       {
           len++;
           curr+=diff;
       }
       ans=max(ans,len);
       }
    }
    return ans;}
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int A[n];
        for (int i = 0; i < n; i++) {
            cin >> A[i];
        }
        Solution ob;
        auto ans = ob.lengthOfLongestAP(A, n);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends