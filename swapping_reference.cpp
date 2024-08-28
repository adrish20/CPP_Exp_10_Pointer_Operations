//Adrish Purkayastha
//EnTC A
//PRN : 23070123011
//C++ program to swap value of two variables using call by reference implementing function
#include <iostream>
using namespace std;
void swap(int *x, int *y){
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}
int main(){
    int a= 10, b = 20;
    swap(a,b);
    cout<<"a = "<<a<<endl;
    cout<<"b = "<<b<<endl;
}
/*
OUTPUT:
a = 20
b = 10
*/