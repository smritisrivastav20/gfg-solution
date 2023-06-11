//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    long long reversedBits(long long x) {
           int i=0;
           long long y=0;
           while(x)
           {
               y+=(x%2)*pow(2,(31-i));
               i++;
               x=x/2;
           }
           return y;
    }
};
/*  long long res =0;
       for(long long i=0;i<32;i++){
           res=res<<1;
           if(n&1==1){
               res++;
           }
           n=n>>1;
       }
       return res;   
   }*/

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long X;
        
        cin>>X;

        Solution ob;
        cout << ob.reversedBits(X) << endl;
    }
    return 0;
}
// } Driver Code Ends