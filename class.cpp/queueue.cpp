#include<iostream>//latex
#define max_size 5
int queue[max_size];
int front = -1 ;
int rear = -1;
using namespace std;

void enqueueue(int item){
    if(rear == max_size-1)
    {
        cout<<"overflow condition";
        return;
    }

    if(front == -1)
    {
        front = 0;
    }
        rear++;
        queue[rear]=item;
        cout<<"item inserted";
        cout<<endl;
    
}

void dequeueue(){
    if(front==-1 || rear==-1)
    {
        cout<<"queueue is empty";
        return;
    }
    cout<<"dequeueue"<<queue[front]<<"item deleted";
    front++;
    cout<<endl;
}

void display(){
    if(front==-1 )
    {
        cout<<"queue is empty";
        return;
    }
    for(int i=front; i<=rear; i++)
    {
        cout<<queue[i]<<" ";
        cout<<endl;
    }
}

int main()
{

    int choice;
    int item;

    cout<<"1.enqueueue\n2.dequeueue\n3.display\n";    
    while(1)
    {
        cout<<"enter the choice";
        cin>>choice;

        switch(choice)
        {

        case 1:
        cout<<"enter the item to be enqueueue";
        cin>>item;
        enqueueue(item);
        break;

        case 2:
        dequeueue();
        break;

        case 3:
        display();
        break;

        case 4:
        return 0;

        default:
        cout<<"invalid choice";
        }
    }
}
