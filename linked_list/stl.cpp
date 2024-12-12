#include<iostream>
#include<list>
#include<iterator>
using namespace std;

void printList(list<int>ll){

    list<int> :: iterator itr;

    for(itr = ll.begin(); itr!=ll.end(); itr++){
        cout<<(*itr)<<" -> ";
    }

    cout<<"NULL"<<endl;
}

int main(){
    list<int> ll; // ll is created
    ll.push_back(5);
    ll.push_front(4);
    ll.push_front(3);
    ll.push_front(2);
    ll.push_front(1);

    printList(ll);
    cout<<ll.size()<<endl;

    cout<<ll.front()<<endl;
    cout<<ll.back();

    ll.pop_back();
    ll.pop_front();
    cout<<endl;
    printList(ll);
    
    return 0;
}