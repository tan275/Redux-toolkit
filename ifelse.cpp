#include<iostream>
using namespace std;
int main()
{
    int age;
    cout<<"enter the age:";
    cin>> age;
    if (age<18)
{
        cout<<"you are eligible";
}
    else if(age==18){
         cout<<"you are patially eligible";
         }

         else {
           cout<< "you are not eligible"; 
         }
           return 0;
}