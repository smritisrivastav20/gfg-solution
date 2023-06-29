//{ Driver Code Starts

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:	
		
	int isDivisible(string s){
	    //complete the function here
int n=s.size();

     int odd=0;

     int even=0;

     for(int i=0;i<n;i++){

         if(s[i]=='1' && i%2==0){

             even++;

         }

         else if(s[i]=='1' && i%2!=0){

             odd++;

         }

     }

     int ans=abs(even-odd);

     return ans%3==0?1:0;

}



};

//{ Driver Code Starts.
int main(){
    
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        Solution ob;
        cout << ob.isDivisible(s) << endl;
    }
return 0;
}


// } Driver Code Ends