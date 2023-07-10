//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
#define MAX 1000

// } Driver Code Ends
class Solution
{
    public:
    /*You are required to complete this method*/
    int findK(int matrix[MAX][MAX],int n,int m,int k)
    {
 		// Your code goes here.
 		   int total_ele=n*m;
        int start_row=0;
        int end_col=m-1;
        int start_col=0;
        int end_row=n-1;
        int cnt=0;

        while(cnt<total_ele)
        {
               
                for(int i=start_col;i<=end_col && cnt<total_ele;i++)
                {
                 
                    cnt++;
                    if(cnt==k)
                    return matrix[start_row][i];
                }
                start_row++;
                for(int i=start_row;i<=end_row && cnt<total_ele;i++)
                {
                    
                    cnt++;
                     if(cnt==k)
                    return matrix[i][end_col];
                }
                end_col--;
                for(int i=end_col;i>=start_col &&cnt<total_ele;i--)
                {
                  
                    cnt++;
                     if(cnt==k)
                    return matrix[end_row][i];
                }
                end_row--;
                for(int i=end_row;i>=start_row && cnt<total_ele;i--)
                {
                  
                    cnt++;
                     if(cnt==k)
                    return matrix[i][start_col];
                }
                start_col++;
        }
     
    }
};





//{ Driver Code Starts.
int main()
{
    int T;
    cin>>T;
  
    while(T--)
    {
        int n,m;
        int k=0;
        //cin>>k;
        cin>>n>>m>>k;
        int a[MAX][MAX];
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                cin>>a[i][j];
            }
        }
        Solution ob;
        cout<<ob.findK(a,n,m,k)<<endl;
        
       
    }
}
// } Driver Code Ends