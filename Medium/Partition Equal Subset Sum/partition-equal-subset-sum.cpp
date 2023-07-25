//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
bool check(int N,int arr[],int sum)
{
    
    bool dp[N+1][sum+1];
    for(int i=0;i<N+1;i++)
    {
        for(int j=0;j<sum+1;j++)
        {
            if(j==0)
            dp[i][j]=1;
            if(i==0)
            dp[i][j]=0;
            
        }
    }
    for(int i=1;i<N+1;i++)
    {
        for(int j=1;j<sum+1;j++)
        {
            if(arr[i-1]<=j)
            {
                dp[i][j]=dp[i-1][j-arr[i-1]]||dp[i-1][j];
            }
            else
            dp[i][j]=dp[i-1][j];
        }}
        return dp[N][sum];
}
    int equalPartition(int N, int arr[])
    {
        int sum=0;
        for(int i=0;i<N;i++)
        {
            sum+=arr[i];
        }
        // code here
        if(sum%2==0)
        {
        return check(N,arr,sum/2);}
        else
        return false;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        int arr[N];
        for(int i = 0;i < N;i++)
            cin>>arr[i];
        
        Solution ob;
        if(ob.equalPartition(N, arr))
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    return 0;
}
// } Driver Code Ends