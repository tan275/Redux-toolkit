#include<iostream>
using namespace std;
class complex
{
    int a, b;

public:
    complex(int, int); //constructor declaration

    void printnumber()
    {
        cout << "your number is " << a << " + " << b << "i" << endl;
    }
};
complex ::complex(int x, int y)//------------->this is a parametrized constructor as it takes two parameters
{
    a = x;
    b = y;
    //cout<<"Hello World";
}

int main(){
    //Implicit call
complex a(4,6);

//Explicit call
complex b = complex(5,7);

a.printnumber();
b.printnumber();

    return 0;
}