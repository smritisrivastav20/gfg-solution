//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution
{
    public:
    //Function to delete middle element of a stack.
    
    void deleteMid(stack<int>&s, int sizeOfStack)
    {
        // code here.. 
        stack<int>st;
       int mid=(sizeOfStack/2);
        while(mid--)
        {
            int x=s.top();
            s.pop();
            st.push(x);
            
        }
        s.pop();
        while(s.empty()==false)
        {
            st.push(s.top());
            s.pop();
        }
        while(st.empty()==false)
        {
            s.push(st.top());
            st.pop();
        }
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin>>t;
    
    while(t--)
    {
        int sizeOfStack;
        cin>>sizeOfStack;
        
        stack<int> myStack;
        
        for(int i=0;i<sizeOfStack;i++)
        {
            int x;
            cin>>x;
            myStack.push(x);    
        }

            Solution ob;
            ob.deleteMid(myStack,myStack.size());
            while(!myStack.empty())
            {
                cout<<myStack.top()<<" ";
                myStack.pop();
            }
        cout<<endl;
    }   
    return 0;
}

// } Driver Code Ends