//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    vector<long long> lcmAndGcd(long long A , long long B) {
        //calculation of gcd using euclidean method
        long long ans=gcd(A,B);
        long long a=(A*B)/ans;
        return {a,ans};
    }
    long long gcd (long long A,long long B)
    {
        if(B==0)
        {
            return A;
        }
        else
        return gcd(B,A%B);
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long A,B;
        
        cin>>A>>B;

        Solution ob;
        vector<long long> ans = ob.lcmAndGcd(A,B);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
    return 0;
}
// } Driver Code Ends