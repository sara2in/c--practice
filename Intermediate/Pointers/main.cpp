/*
 Pointer- A special variable that holds the address of another variable in memory. Used for efficiently passing large objects, dynamic memory allocation
 (adjust memory usage depending on the input, like resizing array at runtime when full), and enabling polymorphism.
*/

#include <iostream>
using namespace std;

void increasePrice(double* price) {
    *price *= 1.2;
}

int main() {
    //DECLARING AND USING POINTERS//
//    int number = 10;
//    //* prints address by address-of operator
//    cout << &number << endl;
//
//    //* int pointer. only point to int var.
//    int* ptr = nullptr; //modern way
//    ptr = &number;
//    //* if (ptr !=  nullptr)
//
//    //* access data at target memory location
//    cout << *ptr << endl;
//    //* change value at target memory location (called indirection or de-referencing operator)
//    *ptr = 20;
//    cout << *ptr << endl;

    //CONSTANT POINTERS//
    //* Scenarios - Data is constant but pointer is not. Pointer is constant (cant point to something). bother are constant

    //Data constant
//    const int x = 10;
//    const int* ptr = &x;
//    int y  = 20;
//    ptr = &y;

    //Pointer constant
//    int x = 10;
//    //* should  always init them
//    int* const ptr = &x;

    //Both constant
//    const int x = 10;
//    const int*  const ptr = &x;

    //PASSING POINTERS TO FUNCTIONS//
    //* Other way than reference param
    double price = 100;
    increasePrice(price);
    cout << price << endl;

    return 0;
}
