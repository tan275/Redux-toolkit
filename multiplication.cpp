// 2). Write a program that prompts the user to 
// input a positive integer. It should then print the 
// multiplication table of that number.

#include <iostream>

using namespace std;

int main()
{
   int n,i;
   cout<<"the value of n is : ";
   cin>>n;
   cout<<"multiplication table of "<<n<<" is ";
   for(i=1;i<=10;i++)
   {
      
   cout<<endl;
   cout<<n<<"*"<<i<<"="<<n*i;
   }
}
