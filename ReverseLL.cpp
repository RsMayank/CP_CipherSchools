#include<bits/stdc++.h>
using namespace std;
class node
{
    public:
    int data ;
    node* next;
    node(int x){
        data = x;
        next = NULL;
    }
};


void InsertNode(node* &head, int n)
{
    //cout<<"InsertNode Called:::..."<<endl;
    node* newNode = new node(n);
    if(head == NULL)
    {
        head = newNode ;
        return;
    }  
    node* temp  =head;
    while(temp->next != NULL)
        temp = temp->next;
    temp ->next = newNode;


}
void reverseLL(node* &head)
{
    node* start = head;
    node* restart = head;
    stack <int> ll;
    while(start != NULL)
    {
        int temp = start->data;
        //cout<<"val: "<<temp<<endl;
        ll.push(temp);
        start = start->next;
    }
    while(!ll.empty())
    {
        int val = ll.top();
        //cout<<"val : "<<val<<endl;
        restart->data = val;
        restart = restart->next;
        ll.pop();
    }
}
//printing linked list
void printList(node* head)
{
    node* tail = head;
    while(tail != NULL)
    {
        cout<<tail->data<<"->";
        tail = tail->next;
    }
    cout<<"NULL"<<endl;
}


node* head;
int main()
{
    //node* tail = head;
    int size;
    cout<<"Enter the size of link list :"<<endl;
    cin>>size;
    for(int i = 0; i < size ; i++)
    {
        //cout<<"Node inserted , Value : "<<i<<endl;
        InsertNode(head,i);
    }
    printList(head);
    reverseLL(head);
    cout<<"LinkedList after reversal :"<<endl;
    printList(head);


    return 0;
}