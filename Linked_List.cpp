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
void DeleteNode(node* &head, int n)
{
    node* temp = head->next;
    node* prev = head;
    while(temp->next != 0)
    {
        if(temp->data == n)
        {
            //node* tempDel = prev;
            prev->next = temp->next;
            return;
        }
        temp = temp->next;
        prev = prev->next;
    }
    cout<<"Node Doesn't Exist: "<<endl;

    return;
}



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
        cout<<"Entering Element of Node: "<<i<<endl;
        cin>>val;
        insertAtTail(head,val);
    }
    cout<<"Enter the node you want to delete: "<<endl;
    int nodeDel;
    cin>>nodeDel;
    cout<<"enter the node you want to search: "<<endl;
    int NodeToBeSearch;
    cin>>NodeToBeSearch;
    node* res  = searchNode(head,NodeToBeSearch);
    if(res!=0)
        cout<<"Element Found"<<endl;
    cout<<"Linked List Before Deletion: "<<endl;
    printList(head);
    DeleteNode(head, nodeDel);
    cout<<"Linked List Ater Delettion of Node "<<endl;
    printList(head);

    return 0;
}