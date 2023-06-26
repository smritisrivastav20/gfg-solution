//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

struct Node
{
	int data;
	struct Node* next;
	
	Node(int x){
	    data = x;
	    next = NULL;
	}
	
};


// } Driver Code Ends
/*
// structure of the node is as follows

struct Node
{
	int data;
	struct Node* next;
	
	Node(int x){
	    data = x;
	    next = NULL;
	}
	
};

*/
class Solution
{
    public:
    struct Node* makeUnion(struct Node* head1, struct Node* head2)
    {
   
        set<int> p;
        set<int>::iterator it;

        // Insert elements from head1 into the set
        while (head1 != NULL) {
            p.insert(head1->data);
            head1 = head1->next;
        }

        // Insert elements from head2 into the set
        while (head2 != NULL) {
            p.insert(head2->data);
            head2 = head2->next;
        }

        struct Node* resultHead = NULL;
        struct Node* resultTail = NULL;

        // Create a new linked list from the set elements
        for (it = p.begin(); it != p.end(); ++it) {
            struct Node* newNode = new Node(*it);
            
            if (resultHead == NULL) {
                resultHead = newNode;
                resultTail = newNode;
            } else {
                resultTail->next = newNode;
                resultTail = resultTail->next;
            }
        }

        return resultHead;
 
    }
    
};


//{ Driver Code Starts.

struct Node* buildList(int size)
{
    int val;
    cin>> val;
    
    Node* head = new Node(val);
    Node* tail = head;
    
    for(int i=0; i<size-1; i++)
    {
        cin>> val;
        tail->next = new Node(val);
        tail = tail->next;
    }
    
    return head;
}

void printList(Node* n)
{
    while(n)
    {
        cout<< n->data << " ";
        n = n->next;
    }
    cout<< endl;
}


int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, m;
        
        cin>>n;
        Node* first = buildList(n);
        
        cin>>m;
        Node* second = buildList(m);
        Solution obj;
        Node* head = obj.makeUnion(first,second);
        printList(head);
    }
    return 0;
}

// } Driver Code Ends