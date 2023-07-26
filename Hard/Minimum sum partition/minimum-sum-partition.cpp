//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{

  public:
	    int minDifference(int arr[], int n)  
    { 
        // SUM FIND KROO JO RANGE DEGA HMLOG 0--->SUM
        int sum=0;
        for(int i=0;i<n;i++)
        {
            sum=sum+arr[i];
        }
        // TABLE CREATE KROO (MATRIX)
        int t[n+1][sum+1];
        
        // intization of 1st col & row 
        for(int i=0;i<n+1;i++)
        {
            for(int j=0;j<sum+1;j++)
            {
                if(i==0)
                {
                    t[i][j]=0;
                }
                if(j==0)
                {
                    t[i][j]=1;
                }
            }
        }
        //CHOICE DIAGRAM KA CODE 
        for(int i=1;i<n+1;i++)
        {
            for(int j=1;j<sum+1;j++)
            {
                if(arr[i-1]<=j)
                {
                    t[i][j]=t[i-1][j-arr[i-1]]||t[i-1][j];
                }
                else
                {
                    t[i][j]=t[i-1][j];
                }
            }
        }
         
         // ANS STORE KRNE KE LIYE  EK VARIABLE
        
        int ans=INT_MAX;
        
        // LOOP TO FIND WHICH ALL SUBSET CAN BE INCLUDED IN THE S1 OF LAST ROW
        
        for(int j=0;j<sum+1;j++)
        {
            if(t[n][j]==1)
            {
                ans=min(ans,abs(sum-2*j));
            }
        }
        return ans;} 
};


//{ Driver Code Starts.
int main() 
{
   
   
   	int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        int a[n];
        for(int i = 0; i < n; i++)
        	cin >> a[i];

       

	    Solution ob;
	    cout << ob.minDifference(a, n) << "\n";
	     
    }
    return 0;
}
// } Driver Code Ends