//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};

void print(Node *root)
{
Node *temp = root;
while(temp!=NULL)
{
cout<<temp->data<<" ";
temp=temp->next;
}
}


// } Driver Code Ends
/*
The structure of linked list is the following

struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};
*/


class Solution
{
    public:
    //Function to remove duplicates from unsorted linked list.
    Node * removeDuplicates( Node *head) 
     {   unordered_set<int> s;
     Node *r=new Node(head->data);
     Node *t=r;
     s.insert(head->data);
     head=head->next;
     while(head!=NULL)
     {
         if(s.find(head->data)==s.end())
         {
             Node *p=new Node(head->data);
             t->next=p;
             t=t->next;
             
             s.insert(head->data);
         }
          head=head->next;
     }
     return r;
    //  Node *res=new Node(head->data);
    //  Node *temp=res;
    //  s.insert(head->data);
    //  head=head->next;
    //  while(head!=NULL){
    //      //if element is not found in the set then 
    //      if(s.find(head->data)==s.end()){
    //          Node *t=new Node(head->data);
    //          temp->next=t;
    //          temp=temp->next;
    //          s.insert(head->data);
    //      }
    //      head=head->next;
    //  }
    //  return res;
    }
};


//{ Driver Code Starts.

int main() {
	// your code goes here
	int T;
	cin>>T;
	
	while(T--)
	{
		int K;
		cin>>K;
		struct Node *head = NULL;
        struct Node *temp = head;
 
		for(int i=0;i<K;i++){
		int data;
		cin>>data;
			if(head==NULL)
			head=temp=new Node(data);
			else
			{
				temp->next = new Node(data);
				temp=temp->next;
			}
		}
		
	    Solution ob;
		Node *result  = ob.removeDuplicates(head);
		print(result);
		cout<<endl;
		
	}
	return 0;
}
// } Driver Code Ends