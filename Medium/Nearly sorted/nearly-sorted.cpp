//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    //Function to return the sorted array.
    vector <int> nearlySorted(int arr[], int num, int k){
        // Your code here
         int  index=0;
       vector<int> ans;
      priority_queue<int,vector<int>,greater<int>> pq;
      for(int i=0;i<=k;i++)
         pq.push(arr[i]);
      for(int i=k+1;i<num;i++)
      {
          ans.push_back(pq.top());
          pq.pop();
          pq.push(arr[i]);
      }
    //   vector<int> ans(arr,arr+num);
      while(!pq.empty())
      {
          ans.push_back(pq.top());
          pq.pop();
      }
      return ans;
    }
};

//{ Driver Code Starts.

int main()
 {
	int T;
	cin>> T;
	
	while (T--)
	{
	    int num, K;
	    cin>>num>>K;
	    
	    int arr[num];
	    for(int i = 0; i<num; ++i){
	        cin>>arr[i];
	    }
	    Solution ob;
	    vector <int> res = ob.nearlySorted(arr, num, K);
	    for (int i = 0; i < res.size (); i++)
	        cout << res[i] << " ";
	        
	    cout<<endl;
	}
	
	return 0;
}

// } Driver Code Ends