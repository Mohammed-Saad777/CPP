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

    void removeCycle(Node* head){
        // detect cycle

        Node* slow = head;
        Node* fast = head;
        bool isCycle = false;

        while(fast!=NULL && fast->next != NULL){

            slow = slow->next;
            fast= fast->next->next;

            if(slow == fast)
            {
            cout<<"cycle exits"<<endl;
            isCycle = true;
            break;
            }
        }

    if(!isCycle){
        cout<<"cycle not exits"<<endl;
        return ;
    }
    
    slow = head;

    if(slow == fast){ //special case
        while(fast->next!=slow)
        {
            fast = fast->next;
        }

        fast->next = NULL; //remove cycle
    }

    else{ //normal work

        Node* prev = fast;
        while(slow!=fast){

            slow = slow->next;
            prev = fast;
            fast = fast->next;
        }

         prev->next = NULL; //remove cycle
    }

}

};


 int main(){

    List ll;
    ll.push_front(5);
    ll.push_front(4);
    ll.push_front(3);
    ll.push_front(2);
    ll.push_front(1);

    ll.tail->next = ll.head;
    
    ll.removeCycle(ll.head);
    ll.printList();
    return 0;
 }

