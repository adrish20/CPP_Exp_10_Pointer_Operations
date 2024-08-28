//Adrish Purkayastha
//EnTC A
//PRN:23070123011
//C++ program to swap value of two variables using call by value
#include <iostream>
using namespace std;
    int main(){
        int a=10,b=20;
        int temp;
        temp = a;
        a = b;
        b = temp;
        cout<<"a = "<<a<<endl;
        cout<<"b = "<<b<<endl;
    }
/*
OUTPUT:
a = 20
b = 10
*/

    
