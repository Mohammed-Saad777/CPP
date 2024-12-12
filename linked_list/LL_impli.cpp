#include<iostream>
using namespace std;

class Node{  //individual node is created , type hi node hai..

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
       // cout<<"~node"<<data<<endl;
        if(next!=NULL){
            delete next;
            next = NULL;
        }
    }  
};

class List{ //collection of node

private:
    Node*head;
    Node*tail;

public:
    List(){
        head = NULL;
        tail = NULL;
    }
    ~List()
    {
       // cout<<"~list"<<endl;
        if(head!=NULL)
        {
            delete head;
            head = NULL;
        }
    }

    void push_front(int val){
    Node*newNode = new Node(val);//constructor call // dynamic allocation

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

    void insert(int val, int pos){
        Node*newNode = new Node(val);

        Node* temp = head;
        for(int i=0; i<pos-1; i++)
        {
            temp = temp->next;
        } 

        newNode->next = temp->next;
        temp->next = newNode;
    }

    void pop_Front(){
        Node*temp = head;

        head = head->next;

        temp->next = NULL;

        delete temp;
    }

    void pop_Back(){
        Node*temp = head;
        while(temp->next->next !=NULL)
        {
            temp = temp->next;
        }

        temp->next = NULL;
        delete tail;
        tail = temp;
    }

    int searchIterator(int key)
    {
        Node*temp = head;
        int idx = 0;
        while(temp !=NULL)
        {
            if(temp->data == key){
                return idx;     
            }

            temp = temp->next;
            idx++;   
        }

        return-1;
       
    }
    int helper(Node*temp , int key)
    {
        if(temp == NULL)
        {
            return -1;
        }

        if(temp->data == key)
        {
            return 0;
        }

        int idx = helper(temp->next , key);

        if(idx == -1)
        {
            return -1;
        }

        return idx+1;

    }
    int searchRec(int key)
    {
        return helper(head, key);
    }

    void reverse(){
        Node* prev = NULL;
        Node* curr = head;

        while(curr != NULL)
        {
           Node* next = curr->next;
           curr->next = prev;

           prev = curr;
           curr = next;
        }

        head = prev;
    }

    int getsize(){
        Node* temp = head;
        int sz = 0;
        while(temp!=NULL)
        {
            temp = temp->next;
            sz++;
        }

        return sz;
    }
    void removeNth(int n){ //O(N) time and space O(1)
        int size = getsize();
        Node* prev = head;

        for(int i=1; i<(size-n); i++)
        {
            prev = prev->next;
        }

        Node* todel = prev->next;
        cout<<"going to delete"<<todel->data<<endl;

        prev->next = prev->next->next;
    }
};

int main()
{
    List ll; //node class lo list class use karegi
    ll.push_front(5);
    ll.push_front(4);
    ll.push_front(3);
    ll.push_front(2);
    ll.push_front(1);
    ll.printList();
    //cout<<ll.searchIterator(33);
    //cout<<ll.searchRec(4);
    //ll.reverse();
    //ll.printList();
    ll.removeNth(2);
    ll.printList();
    return 0;
}