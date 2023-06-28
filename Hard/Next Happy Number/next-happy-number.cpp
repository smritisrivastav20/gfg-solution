//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std;

// } Driver Code Ends
class Solution{
public:
     bool solve(int sample){
        if(sample==1 || sample==7){
            return true;
        }
        if(sample<10){
            return false;
        }
        int x,temp=0;
        while(sample!=0){
             x=sample%10;
            sample=sample/10;
           temp+=x*x;
        }
        sample=temp;
        solve(sample);
    }

    int nextHappy(int N){
        int x=0;
        int sample=N+1;
        while(x==0){
            solve(sample);
            if(solve(sample)==true){
                return sample;
            }
            else{
                sample+=1;
            }
        }
        return -1;
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin>>N;
        Solution ob;
        cout << ob.nextHappy(N) << endl;
    }
    return 0; 
}
// } Driver Code Ends