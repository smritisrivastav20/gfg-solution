//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	vector<int> kLargest(int arr[], int n, int k) {
	    // code here
	    vector<int>a;
	    priority_queue<int,vector<int>,greater<int>>p;
	    for(int i=0;i<k;i++)
	    p.push(arr[i]);
	    for(int i=k;i<n;i++)
	    {
	    if(p.top()>arr[i])
	    {continue;
	    }
	    else
	    {
	        p.pop();
	        p.push(arr[i]);
	    }
	}
 while(p.empty()==false){
      a.push_back(p.top());
	    p.pop();
	}
	reverse(a.begin(),a.end());
	return a;
 }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.kLargest(arr, n, k);
        for (auto x : ans) {
            cout << x << " ";
        }
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends