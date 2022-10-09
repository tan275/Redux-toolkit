#include<iostream>
using namespace std;
int main(){

    // Asking the number and printing its table using while loop54

    double numb = 1.0;
    double numbe;
    cout << "Enter the number: ";
    cin >> numbe;
    cout << "Printing the table of " << numbe << " using while loop" <<endl;
    while (numb<=10)
    {
        cout << numbe << "x" << numb << "=" << numbe*numb << endl;
       numb++;
    }
    


    
    return 0;
}
