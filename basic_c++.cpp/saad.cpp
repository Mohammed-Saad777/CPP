#include<iostream>

using namespace std;

int main()
{
    float pencil,pen,eraser;
   
   cin>>pencil;
   cin>>pen;
   cin>>eraser;

   float total= pencil+pen+eraser;

   cout<<"the total amount is = "<<total<<endl;

   cout<<"total amount with gst = "<< total+(0.18*total)<<endl;
   
    return 0;
}