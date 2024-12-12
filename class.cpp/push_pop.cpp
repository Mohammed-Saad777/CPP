#include<iostream>
#define max_size 5
int stack[max_size];
int top = -1;
using namespace std;

void push(int item){
    if(top == max_size-1)
    {
        cout<<"overflow and exit\n";
    }

    else{
        stack[++top] = item;
        cout<<item<<"item inserted or pushed\n";
    }

}

    void pop(){
        if(top == -1){
            cout<<"underflow";
        }
        else{
            int item = stack[top--];
            cout<<"deleted item"<<item;
        }

}

    void display(){
        if(top ==-1)
        {
            cout<<"stack is empty";
        }

        else{
            for(int i=0; i<=top; i++)
            {
                cout<<stack[i]<<",";
            }

            cout<<"\n";
        }
    }

int main()
{
    int choice, item;
    cout<<"1.push\n2.pop\n3.display\n4.exit\n";

    while(1)
    {
        cout<<"enter the choice";
        cin>>choice;

        switch(choice)
        {

            case 1:
            cout<<"enter the value to be push";
            cin>>item;
            push(item);
            break;
            
            case 2:
            pop();
            break;
            
            case 3:
            display();
            
            case 4:
            return 0;
            
            default:
            cout<<"invalid number";
            
        }
    }

    return 0;
}

