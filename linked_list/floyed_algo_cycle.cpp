#include<iostream>
using namespace std;

class Node{ 

public:
    int data;
    Node*next;


    Node(int val)
    {
        data = val;
        next = NULL;
    } 

    ~Node()
    {
       
        if(next!=NULL){
            delete next;
            next = NULL;
        }
    }  
};

class List{ 

public:
    Node*head;
    Node*tail;

    List(){
        head = NULL;
        tail = NULL;
    }
    ~List()
    {
      
        if(head!=NULL)
        {
            delete head;
            head = NULL;
        }
    }

    void push_front(int val){
    Node*newNode = new Node(val); 
    if(head == NULL){
        head = tail = newNode;
    } 
    else{
        newNode->next = head;
        head = newNode;
    }
    }

    void push_back(int val){
        Node*newNode = new Node(val);

        if(head== NULL){
            head = tail = newNode;
        }
        else{
            tail->next = newNode;
            tail = newNode;
        }
    }

    void printList(){
        Node* temp = head;

        while(temp!=NULL)
        {
            cout<<temp->data<<" -> ";
            temp = temp->next;
        }
        cout<<"NULL"<<endl;
    }
};

bool iscycle(Node*head)
{
    Node* slow = head;
    Node* fast = head;

    while(fast!=NULL && fast->next != NULL)
    {
        slow = slow->next; //1
        fast= fast->next->next; //2

        if(slow == fast)
        {
            cout<<"cycle exit";
            return true;
        }
    }

    cout<<"not exits";
    return false;
}

int main(){

    List ll;
    ll.push_front(5);
    ll.push_front(4);
    ll.push_front(3);
    ll.push_front(2);
    ll.push_front(1);

    ll.tail->next = ll.head;
    
    iscycle(ll.head);
    return 0;
}
