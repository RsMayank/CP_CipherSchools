#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node* next;
    node(int val)
    {
        data = val;
        next = NULL;
    }
};

void insertAtTail(node* &head, int Val)
{
    node* n  = new node(Val);
    if(head == NULL)
    {    
        head = n;
        return;
    }
    node* temp = head;
    while(temp->next != NULL)
    {
        temp = temp -> next;
    }
    temp->next  = n;
    n->next= NULL;

    
}

void printList(node *n)
{
    while (n != NULL)
    {
        cout << n->data << "->";
        n = n->next;
    }
    cout <<"NULL"<<endl;
}
node* searchNode(node* head, int n)
{
    node* notFound = NULL;
    node* curr = head->next;
    node* prev = head;
    bool isNode = false;
    node* indexNode;
    while(curr->next != NULL)
    {
        if(curr->data == n)
        {
            isNode = true;
            indexNode = prev->next;
            return indexNode;
        }
        else
        {
            curr = curr->next;
            prev = prev ->next;
        }

    }
    return notFound;
}

/* void DeleteNode(node* &head, int n)
{
    searchNode(head, n);
}
*/


/*node* printList(node* n)
{
    while(n->next != NULL)
    {
        cout<<"call"<<endl;
        cout<<n->data<<"->";
        n = n->next;
    }
    cout<<"NULL"<<endl;
    return 0;
}
*/


node* head = NULL;
int main()
{
    int size;
    cout<<"Enter the Size of Linked_List:"<<endl;
    cin>>size;
    for(int i = 0 ; i < size ; i++)
    {
        int val;
        cin>>val;
        insertAtTail(head,val);
    }
    cout<<"enter the node you want to search: "<<endl;
    int NodeToBeSearch;
    cin>>NodeToBeSearch;
    node* res  = searchNode(head,NodeToBeSearch);
    cout<<res->data<<endl;

    printList(head);

    return 0;
}