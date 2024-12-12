#include<iostream>
using namespace std;

class Swap {
public:
     
    void swapValues(int &a, int &b) {
        int temp = a;
        a = b;
        b = temp;
    }

  
    void swapValues(char &a, char &b) {
        char temp = a;
        a = b;
        b = temp;
    }

    
    void swapValues(float &a, float &b) {
        float temp = a;
        a = b;
        b = temp;
    }
};

int main() {
    Swap s;

   
    int x = 5, y = 10;
    cout << "Before swapping integers: x = " << x << ", y = " << y << endl;
    s.swapValues(x, y);
    cout << "After swapping integers: x = " << x << ", y = " << y << endl;

   
    char c1 = 'A', c2 = 'B';
    cout << "\nBefore swapping characters: c1 = " << c1 << ", c2 = " << c2 << endl;
    s.swapValues(c1, c2);
    cout << "After swapping characters: c1 = " << c1 << ", c2 = " << c2 << endl;

   
    float f1 = 1.5f, f2 = 3.7f;
    cout << "\nBefore swapping floats: f1 = " << f1 << ", f2 = " << f2 << endl;
    s.swapValues(f1, f2);
    cout << "After swapping floats: f1 = " << f1 << ", f2 = " << f2 << endl;

    return 0;
}
