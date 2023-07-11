//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
    /*You are required to complete this method */
    int findMaxDiff(int a[], int n)
    {
      //Your code here
      vector<int>v(n,0);
      int ans=0;
      for(int i=1;i<n;i++)
      {
          int j=i-1;
          while(j>-1)
          {
              if(a[j]<a[i]){
                  v[i]=a[j];break;
              }
              j--;
          }
      }
      for(int i=n-2;i>-1;i--)
      {
          int j=i+1;
          while(j<n)
          {
              if(a[j]<a[i])
              {
                  ans=max(ans,abs(v[i]-a[j]));break;
              }
              j++;
          }
      }
      return  max(ans,v[n-1]);
    }
};

//{ Driver Code Starts.
int main()
{
   int t;
   cin>>t;
   while(t--)
   {
   	int n;
   	cin>>n;
   	int a[n];
   	for(int i=0;i<n;i++)
   	cin>>a[i];
   	Solution ob;
   	cout<<ob.findMaxDiff(a,n)<<endl;
   }
    return 0;
}



// } Driver Code Ends