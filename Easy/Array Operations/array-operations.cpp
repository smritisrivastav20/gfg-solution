//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int arrayOperations(int n, vector<int> &arr) {
        // code here
        int flag1=0, count=0, flag2=0;
        if(arr[0]==0){
            flag1=1;
        }
        if(arr[n-1]==0){
            flag2=1;
        }
        for(int i=0; i<n-1; i++){
            if(arr[i]==0 && arr[i+1]!=0){
                count++;
            }
        }
        return (count || flag2)?(flag1?count:count+1):-1;
    }
};


//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        
        int n;
        cin>>n;
        
        
        vector<int> arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        
        Solution obj;
        int res = obj.arrayOperations(n, arr);
        
        cout<<res<<endl;
        
    }
}

// } Driver Code Ends