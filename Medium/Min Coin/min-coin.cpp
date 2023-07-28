//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
	public:
	int MinCoin(vector<int>nums, int amount)
	{
	    // Code here
	       // Code here
	    int n=nums.size();
	    long dp[n+1][amount+1];
        for(int i=0;i<n+1;i++)
        for(int j=0;j<amount+1;j++)
        {
            if(i==0)
            dp[i][j]=INT_MAX-1;
            if(j==0)
            dp[i][j]=0;
        }
         for(int i=1,j=1;j<=amount ; j++)
         {
             if(j%nums[0]==0)
             dp[i][j]=j/nums[0];
             else{
                 dp[i][j]=INT_MAX-1;
             }
         }
         for(int i=2;i<n+1;i++)
         {
             for(int j=1;j<amount+1;j++)
             {
                if(nums[i-1]<=j) 
                dp[i][j]=min(dp[i-1][j],1+dp[i][j-nums[i-1]]);
                else
                dp[i][j]=dp[i-1][j];
             }
         }
         if(dp[n][amount]==INT_MAX-1)
         return -1;
         return dp[n][amount];
         
	}};
	   // int n=nums.size()-1;
	   // int dp[n+1][amount+1];
	   // for(int i=0;i<n+1;i++)
	   // {
	   //     for(int j=1;j<amount+1;j++)
	   //     {
	   //         if(i==0)
	   //         dp[i][j]=INT_MAX-1;
	   //         if(j==0)
	   //         dp[i][j]=0;
	   //     }
	   // }
	   //    for(int i=1,j=1;j<amount+1;j++)
	   // {
	   //     if(j%nums[0]==0)
	   //     dp[i][j]=j/nums[0];
	   //     else
	   //     dp[i][j]=INT_MAX-1;
	   // }
	        
	   //  for(int i=1;i<n+1;i++)
	   // {
	   //     for(int j=1;j<amount+1;j++)
	   //     {
	   //         if(nums[i-1]<=amount)
	   //         {
	   //             dp[i][j]=min(1+dp[i-1][j-nums[i-1]],dp[i-1][j]);
	   //         }
	   //         else
	   //         dp[i][j]=dp[i-1][j];
	   //     }}
	   //    if(dp[n][amount]==INT_MAX-1)
    //      return -1;
    //      return dp[n][amount];


//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, amount;
		cin >> n >> amount;
		vector<int>nums(n);
		for(int i = 0; i < n; i++)
			cin >> nums[i];
		Solution ob;
		int ans = ob.MinCoin(nums, amount);
		cout << ans <<"\n";
	}
	return 0;
}
// } Driver Code Ends